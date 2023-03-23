import sys
import numpy as np
from fastdtw import fastdtw


def read_binary_file(file_path):
    with open(file_path, 'rb') as file:
        content = file.read()
    return np.frombuffer(content, dtype=np.uint8)


if __name__ == '__main__':
    if len(sys.argv) < 3:
        print('Usage: python dtw.py <file1> <file2>')
        exit(1)

    f1 = read_binary_file(sys.argv[1])
    f2 = read_binary_file(sys.argv[2])

    distance, _ = fastdtw(f1, f2)
    print(distance)
