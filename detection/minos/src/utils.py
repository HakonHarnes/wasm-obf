import os
import sys
import pandas as pd
import numpy as np
import time

from keras.models import Sequential
from keras.layers import Dense, Conv2D, Flatten, MaxPooling2D, Reshape, Dropout
from tensorflow.keras.utils import to_categorical
from tensorflow.keras.callbacks import ModelCheckpoint
from sklearn.metrics import roc_curve
from sklearn.metrics import auc as auc_keras
from concurrent.futures import ThreadPoolExecutor

import keras

import matplotlib.pyplot as plt
import os

from datetime import datetime

# Split the dataset for testing and training
def split(df, testfraction=0.5):
    cp = df.copy()    
    index_to_cut = int(len(cp.index)*(testfraction))
    shuffled = np.random.permutation(cp.index)
    pref, suf = shuffled[:index_to_cut], shuffled[index_to_cut:]
    
    assert len(pref) + len(suf) == len(cp.index)
    return cp.loc[pref], cp.loc[suf]


# Creates the folds for a given dataset
def folds(df, nofolds=10):
    chunk_size = int(len(df.index)/nofolds) + 1 # ceiling approx.
    permutation = np.random.permutation(df.index)
    
    folds = [ df.loc[permutation[chunk_size*i:chunk_size*(i + 1)]].copy() for i in range(nofolds)]
    
    return folds

# Given correct labels, returns the accuracy of the model predictions
def accuracy(df, correctlabels):
    acc = 0
    for prediction, correct in zip(df.iloc, correctlabels):
        if prediction.idxmax() == correct:
            acc += 1
            
    return acc/len(df.index)

# Calculates the F score
def f_score(df, correctlabels):
    TP = 0
    FP = 0
    FN = 0
    for prediction, correct in zip(df.iloc, correctlabels):
        predicted_class = prediction['CLASS']
        if correct == 'MALIGN' and predicted_class == 'MALIGN':
            TP += 1
        else:
            if predicted_class == 'BENIGN' and correct == 'MALIGN':
                FN += 1
            if predicted_class == 'MALIGN' and correct == 'BENIGN':
                FP += 1
    DEN = (TP + 0.5*(FP + FN))
    print(TP)
    return TP/DEN
                

# To plot ROC and get the AUC
def plot_roc(fpr_keras, tpr_keras, auc_keras_val, filename, title="ROC curve"):
    fig, ax = plt.subplots()    
    format_axes(ax, hide=[], show=['top', 'left', 'right', 'bottom'])
    sanitized_name = f"{filename}".replace("_", ".")
    print(f"Plotting {sanitized_name}")
    
    ax.plot([0, 1], [0, 1], 'k--')
    ax.plot(fpr_keras, tpr_keras, label='auc = {:.3f}'.format(auc_keras_val))
    ax.set_xlabel('False positive rate')
    ax.set_ylabel('True positive rate')
    ax.set_title(title)
    ax.legend(loc='best')
    plt.tight_layout()
    
    sanitized_name = f"{filename}".replace("_", ".")
    fig.savefig(sanitized_name)
    
# To plot accuracy
def plot_accuracy(epochs, accuracy, validation_acc, filename):    
    fig, ax = plt.subplots()    
    format_axes(ax, hide=[], show=['top', 'left', 'right', 'bottom'])
    sanitized_name = f"{filename}".replace("_", ".")
    print(f"Plotting {sanitized_name}")
    
    format_axes(ax, hide=[], show=['top', 'left', 'right', 'bottom'])
    ax.plot(epochs, accuracy, 'bo', label='Training acc')
    ax.plot(epochs, validation_acc, 'r', label='Validation acc')
    ax.set_xlabel('Epochs')
    ax.set_ylabel('Accuracy')
    ax.set_title('Training and\nvalidation accuracy')
    ax.legend()    
    plt.tight_layout()
    fig.savefig(sanitized_name)


# To plot loss
def plot_loss(epochs, loss, validation_loss, filename):
    fig, ax = plt.subplots()    
    format_axes(ax, hide=[], show=['top', 'left', 'right', 'bottom'])
    sanitized_name = f"{filename}".replace("_", ".")
    print(f"Plotting {sanitized_name}")
    
    ax.plot(epochs, loss, 'bo', label='Training loss')
    ax.plot(epochs, validation_loss, 'r', label='Validation loss')
    ax.set_title('Training and\nvalidation loss')
    ax.set_xlabel('Epochs')
    ax.set_ylabel('Loss')
    ax.legend()
    plt.tight_layout()
    
    fig.savefig(sanitized_name)
    
def plot_pca(df, name):
    plt.figure() # clean the buffer
    # trying PCA to see the distribution of the samples
    from sklearn.decomposition import PCA

    pixels = [f"{x}_{y}" for x in range(100) for y in range(100)]

    X = df[pixels].values
    Xb = df[df['CLASS'] == 'BENIGN']
    Xb = Xb[pixels].values
    Xm = df[df['CLASS'] == 'MALIGN']
    Xm = Xm[pixels].values

    pca = PCA(n_components=2, whiten=True).fit(X)
    X_pcab = pca.transform(Xb)
    X_pcam = pca.transform(Xm)


    row = 0
    col = 1

    plt.scatter(X_pcab[:,row],X_pcab[:,col],c='b', alpha=0.5)
    plt.scatter(X_pcam[:,row],X_pcam[:,col],c='r', alpha=0.5)

    # blue for benign
    # red for malign

    plt.savefig(name)
    
def plot_manifolds(df, name):
    plt.figure() # clean the buffer
    from sklearn.manifold import MDS
    model = MDS(n_components=2, random_state=2)
    pixels = [f"{x}_{y}" for x in range(100) for y in range(100)]

    X = df[pixels].values
    
    manifolds = model.fit_transform(X)
    colors = df['CLASS'].values
    colors = [[1, 0,0,0.5] if c == 'MALIGN' else [0,0,1, 0.5] for c in colors]

    plt.scatter(manifolds[:, 0], manifolds[:, 1], c=colors)
    plt.axis('equal');
    plt.savefig(name)
    
# Plots the image from the feature columns
def img_sample(sample):
    # clean out matplotlib.pyplot
    plt.figure()
    pixels = [f"{x}_{y}" for x in range(100) for y in range(100)]

    print(sample['Name'], sample['CLASS'])
    values = sample[pixels].values
    values = values.reshape((100,100))

    plt.imshow(np.float32(values))