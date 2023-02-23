# This module contains the helper functions that encode an input Wasm to a png image
import sys
from PIL import Image
import math
import numpy as np
import os


def get_pixels(filename):
    bytes = open(filename, 'rb').read()
    # The size of the image is calculated with the sqrt
    size = len(bytes)

    w = int(math.sqrt(size))

    if w > 0:
        h = int(size/w)

    img = Image.frombuffer('L', (w, h), bytes)

    # resize all images to 100x100 pixels
    # TODO check this
    img = img.resize((100, 100))

    return np.asarray(img)

# Returns the image or save it to a file


def encode(filename, save_image_on_disk=""):
    bytes = open(filename, 'rb').read()
    # The size of the image is calculated with the sqrt
    size = len(bytes)

    w = int(math.sqrt(size))
    if w > 0:
        h = int(size/w)

        img = Image.frombuffer('L', (w, h), bytes)

        # resize all images to 100x100 pixels
        # TODO check this
        img = img.resize((100, 100))

        if save_image_on_disk:
            name = os.path.basename(filename)
            img.save(f"{save_image_on_disk}/{name}.png")

        frame = np.asarray(img)
        # normalization pass, all between 0-1
        # notice this is the same as minmax normalization
        frame = np.divide(frame, 255)
        return f"{save_image_on_disk}/{name}.png", frame
    else:
        print(f"Error reading binary, size {size}, {filename}")
        raise Exception()


if __name__ == "__main__":
    encode(sys.argv[1])
