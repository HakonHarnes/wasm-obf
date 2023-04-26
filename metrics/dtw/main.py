import re
import subprocess

from fastdtw import fastdtw


def _preprocess_wasm_file(wasm_file):
    wat = subprocess.check_output(['wasm2wat', wasm_file])
    wat = wat.decode('utf-8')
    lines = wat.splitlines()
    return lines


def _preprocess_v8_file(v8_file):
    lines = _read_lines_from_file(v8_file)
    instructions = []

    pattern = re.compile(r'@\s*\d+\s*:.*?([A-Z].*)')

    for line in lines:
        match = pattern.search(line)
        if match:
            instruction = match.group(1).strip()
            instructions.append(instruction)

    return instructions


def _read_lines_from_file(file):
    with open(file, 'r') as file:
        lines = file.readlines()
    return lines


def preprocess_file(file):
    if file.endswith('.wasm'):
        return _preprocess_wasm_file(file)
    elif file.endswith('.v8'):
        return _preprocess_v8_file(file)
    else:
        return _read_lines_from_file(file)


def lines_to_numbers(l1, l2):

    n1 = [hash(line) for line in l1]
    n2 = [hash(line) for line in l2]

    return n1, n2


def equal(a, b):
    return 0 if a == b else 1


def main():
    g1 = '/app/binaries/g1.v8'
    g2 = '/app/binaries/g2.v8'
    g3 = '/app/binaries/g3.v8'

    c1 = '/app/binaries/c1.v8'
    c2 = '/app/binaries/c2.v8'

    k1 = '/app/binaries/k1.v8'
    k2 = '/app/binaries/k2.v8'

    f1 = [g2, g2, g2]
    f2 = [g1, g2, g3]

    for i in range(len(f1)):
        l1 = preprocess_file(f1[i])
        l2 = preprocess_file(f2[i])

        n1, n2 = lines_to_numbers(l1, l2)

        distance, _ = fastdtw(n1, n2, dist=equal)
        print(f"{f1[i]} vs {f2[i]}: {distance}")


if __name__ == "__main__":
    main()
