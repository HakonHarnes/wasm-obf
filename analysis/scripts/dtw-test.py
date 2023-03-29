import sys
import re
from io import StringIO
import numpy as np
from fastdtw import fastdtw


def read_wat_file(file):
    with open(file, 'r') as f:
        content = f.read()
    return content


def preprocess_wat_content(content):
    lines = content.split('\n')
    stripped_lines = [re.sub(r'\s+', ' ', line.strip()) for line in lines]
    return stripped_lines


def wat_to_numeric(wat_content):
    numeric_representation = []
    for line in wat_content:
        if not line:
            continue
        numeric_line = hash(line)
        numeric_representation.append(numeric_line)
    return np.array(numeric_representation)


def dtw_distance(file1, file2):
    wat1_content = read_wat_file(file1)
    wat2_content = read_wat_file(file2)

    preprocessed_wat1 = preprocess_wat_content(wat1_content)
    preprocessed_wat2 = preprocess_wat_content(wat2_content)

    wat1_numeric = wat_to_numeric(preprocessed_wat1)
    wat2_numeric = wat_to_numeric(preprocessed_wat2)

    distance, _ = fastdtw(wat1_numeric, wat2_numeric)

    return distance


if __name__ == "__main__":
    file1 = sys.argv[0]
    file2 = sys.argv[1]

    distance = dtw_distance(file1, file2)
    print("DTW Distance:", distance)
