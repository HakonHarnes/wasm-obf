import pandas as pd
import sys
import os


if __name__ == '__main__':
    folder = sys.argv[1]
    out = sys.argv[2]
    records = []
    # read benign
    for f in os.listdir(f"{folder}/benign"):
        if f.endswith("out.csv"):

            record = {
                'MINOS_benign': 1.0,
                'MINOS_malign': 0.0
            }
            record['id'] = f.replace(".out.csv", "")
            records.append(record)

    # read malicious
    for f in os.listdir(f"{folder}/malign"):
        if f.endswith("out.csv"):
            record = {
                'MINOS_benign': 0.0,
                'MINOS_malign': 1.0
            }
            record['id'] = f.replace(".out.csv", "")
            records.append(record)

    fr = pd.DataFrame(records)
    fr.to_csv(out, index=False)
