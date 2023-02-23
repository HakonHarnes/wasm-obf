# Return 1 if the input binary is detected as a non-malware
from pandarize import preprocess_csv
from utils import *
import modin.pandas as pdfast
import sys
import pandarize
import shutil


class MINOS:
    '''
        A class for the implementation of the MINOS proposal (https://www.ndss-symposium.org/wp-content/uploads/ndss2021_4C-4_24444_paper.pdf)
        ...

        Attributes
        ----------

        classes: list
            Do not change this attribute, it contains the mapping from the literal CLASS value: BENIGN or MALIGN as indexes in the array
            Use this attribute to refer to the index of the correct label,
            for example, `MINOS.classes.index("MALIGN")` or `MINOS.classes[0]`
    '''
    classes = ['MALIGN', 'BENIGN']

    def __init__(self, size=(100, 100), add_maxpool=True):
        """
        Parameters
        ----------
        size : tuple
            The size of the image representation, (100,100) by default
        add_maxpool : boolean
            The option to add maxpool layers between convolutional layers
        """
        # Create and compile the CNN following the instructions from MINOS
        model = Sequential()
        model.add(Reshape((*size, 1), input_shape=(size[0]*size[1], )))
        model.add(Conv2D(16, kernel_size=3,
                  activation='relu', input_shape=(*size, 1)))
        if add_maxpool:
            model.add(MaxPooling2D(pool_size=(2, 2)))
        model.add(Conv2D(32, kernel_size=3, activation='relu'))
        if add_maxpool:
            model.add(MaxPooling2D(pool_size=(2, 2)))
        model.add(Conv2D(64, kernel_size=3, activation='relu'))
        if add_maxpool:
            model.add(MaxPooling2D(pool_size=(2, 2)))

        model.add(Flatten())
        model.add(Dense(2, activation='softmax'))

        model.compile(optimizer='rmsprop',
                      loss='categorical_crossentropy', metrics=['accuracy'])

        # To print the summary of the CNN model, layers, parameters, etc
        model.summary()

        self.model = model

    #
    #

    def preprocess(self, data, shape=(100, 100)):
        """
        This method returns a collection of image pixels.

        Each pixel value is stored in a column with the name `<row>_<column>` 
        for the 100x100 binary transformation. There should be a total of 100x100 columns then. To get
        the column values you can construct the following array `[f"{x}_{y}" for x in range(shape[0]) for y in range(shape[1])]`
        and then access the pandas frame.

        Parameters
        ----------
        data : pandas.DataFrame
            The dataset frame
        shape: tuple
            Image tuple size (width, height), default value as (100,100)
        """

        features = [f"{x}_{y}" for x in range(
            shape[0]) for y in range(shape[1])]
        # Categorize data
        labels = data['CLASS'].apply(lambda x: MINOS.classes.index(x))
        labels = to_categorical(labels)

        values = data[features].values
        return values, np.array(labels)

    def fit(self, model_name="minos.h5"):
        """
        Trains the classifier


        Parameters
        ----------
        train_data : pandas.DataFrame
            The dataset frame used for training
        test_data: pandas.DataFrame
            The dataset frame used for validation and testing during training
        epochs:
            Number of epochs of training, 50 epochs is the default
        mode_name: str
            The model can be saved as a h5 file after training, the model will be saved with this parameter value as name
            The training will be avoided if there is a file with this name.
        """

        self.model = keras.models.load_model(model_name)

    def predict(self, data):
        """
        Given dataframe, uses the fitted model to 
        predict the labels

        Parameters
        ----------
        data : pandas.DataFrame
            The dataset frame containing the instances to be predicted
        """
        X, _ = self.preprocess(data)

        p = self.model.predict(X)

        d = pd.DataFrame(p, columns=MINOS.classes)
        return d

    def predict_classes(self, pd,  predictions):
        """
         The predictions (predict method) are given using a column per label,
         and setting the row values to the probability of the instance to be that 
         class. This method, adds a new column, 'CLASS', and sets its value to the
         name of the prediction column with higher probability.

        Parameters
        ----------
        pd : pandas.DataFrame
            The dataset frame where the `CLASS` label will be added
        predictions: pandas.DataFrame
            Outcome of the predict method
        """
        cp = pd.reset_index()
        cp['CLASS'] = predictions.idxmax(axis=1)
        return cp


if __name__ == '__main__':
    CURRENT_DIR = os.path.dirname(__file__)
    t = time.time()
    minos = MINOS()
    minos.fit(model_name=f"{CURRENT_DIR}/original23.h5")
    print("Time loading", time.time() - t)
    t = time.time()

    files = os.listdir(sys.argv[1])
    out = sys.argv[2]
    for w in files:
        pixels = preprocess_csv(f"{sys.argv[1]}/{w}")
        print("Time preprocess", time.time() - t)
        predictions = minos.predict(pixels)
        if int(predictions['BENIGN'].values[-1]):
            predictions.to_csv(f"{out}/benign/{w}.out.csv")
            shutil.copy(f"{sys.argv[1]}/{w}", f"{out}/benign/{w}")
        else:
            predictions.to_csv(f"{out}/malign/{w}.out.csv")
            shutil.copy(f"{sys.argv[1]}/{w}", f"{out}/malign/{w}")
