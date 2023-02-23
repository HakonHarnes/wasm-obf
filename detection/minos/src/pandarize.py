# This module encodes the images into the dame CSV
import sys
import pandas as pd
from concurrent.futures import ThreadPoolExecutor
from tensorflow.keras.utils import to_categorical
import time
import numpy as np
import os
import imaginator

# This function adds the absolute path to the numpy data field. This field
# is relative to the dataset.csv path, hence, this function will help to concat two different datasets
# since it add the absolute path of the dataset.csv file as a prefix for the npy file


def fixpd(df, folder, col):
    df = df.astype({col: str}, errors='raise')
    df[col] = f"{folder}" + df[col] + ".npy"
    return df

# This method returns a collection of the image datas.
# It reads each NYPID field and call `numpy.load` to load the
# 100x100 image data for each file


def preprocess(data, out):
    r = data.groupby(by='CLASS').apply(lambda x: len(x))
    print(r)

    # iterate the data and load the nyd
    values = []
    print("Reading images")
    L = len(data['NYPID'])
    t0 = time.perf_counter()

    # To do so in parallel
    out = open(out, 'a')

    features = [f"{x}_{y}" for x in range(100) for y in range(100)]
    features = ",".join(features)
    out.write(f"Name,{features},CLASS\n")
    with ThreadPoolExecutor(max_workers=32) as executor:
        futures = []

        def load(x):
            img = np.load(x["NYPID"])
            l = np.concatenate(img).ravel().tolist()
            l = [str(x) for x in l]
            flat = ",".join(l)
            out.write(f"{x['Name']},{flat},{x['CLASS']}\n")
            return True
        # First enqueue all load calls,
        for i, row in enumerate(data.iloc):
            future = executor.submit(load, row)
            futures.append(future)
            if i % 1000 == 999:
                print(
                    f"Enqueueing \r{i}/{L} ({100*i/L:0.2f}%) {time.perf_counter() - t0:.2f}s")

        # For each future, load them in the same order they were enqueued
        for i, f in enumerate(futures):
            if i % 1000 == 999:
                print(
                    f"Retrieving \r{i}/{L} ({100*i/L:0.2f}%) {time.perf_counter() - t0:.2f}s")

            r = f.result()


# This method returns a collection of the image datas.
# It reads each NYPID field and call `numpy.load` to load the
# 100x100 image data for each file
def preprocess_csv(img):
    print(img)

    features = [f"{x}_{y}" for x in range(100) for y in range(100)]
    features = ",".join(features)

    img = imaginator.get_pixels(img)
    features = {
        'Name': img,
        'CLASS': 'BENIGN'
    }
    w, h = img.shape
    for x in range(w):
        for y in range(h):
            features[f'{x}_{y}'] = img[x, y]

    frame = pd.DataFrame([features])

    return frame


def pandarize(folder, out):
    data = pd.read_csv(f"{folder}/dataset.csv")
    data = fixpd(data, f"{folder}/", "NYPID")

    preprocess(data, out)


if __name__ == "__main__":

    if os.path.exists(sys.argv[2]):
        os.remove(sys.argv[2])

    pandarize(sys.argv[1], sys.argv[2])
