import os

from file_utils import write_file, read_file

if __name__ == "__main__":
    file = "benign.wasm"
    status = os.system(f"python src/minio.py {file} >/dev/null 2>&1")
    malicious = status != 0

    print(malicious)

    # file = 'result.json'
    #
    # data = read_file(file)
    #
    # result = {
    #     "malicious": True,
    #     "transformations": ["flatten", "dog"]
    # }
    #
    # data.append(result)
    # write_file(file, data)
