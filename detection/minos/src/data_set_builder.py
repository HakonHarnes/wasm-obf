# This modules encapsulates a bunch of Wasm binaries and creates a CSV file to
# be used by classifiers

import sys
import csv
import imaginator
import os
import numpy as np
import matplotlib.pyplot as plt

import threading
import queue

q = queue.Queue()


class ConsumerThread(threading.Thread):
    def __init__(self, name, csv_folder, size):
        super(ConsumerThread, self).__init__()
        self.name = name
        self.csv_folder = csv_folder
        self.size = size

    def run(self):
        while not q.empty():
            try:
                sys.stdout.write(f"\rREMAINING {q.qsize()}          ")
                id, wasmf, class_ = q.get()
                name, frame = imaginator.encode(
                    wasmf, save_image_on_disk=self.csv_folder)
                np.save(f"{self.csv_folder}/{id}", frame)

                # Write as append to CSV file
                f = open(f"{self.csv_folder}/dataset.csv", 'a')
                f.write(
                    f"{name},{self.size[0]},{self.size[1]},{id},{class_}\n")
            except KeyboardInterrupt:
                break
            except Exception as e:
                print(e)
        return


OUT_FOLDER = sys.argv[2]  # os.path.dirname(__file__)
# OUT_FOLDER = os.path.join("dataset")

if not os.path.exists(OUT_FOLDER):
    os.mkdir(OUT_FOLDER)


def build_csv_from_folder(folder_name, label="MALIGN"):
    files = os.listdir(folder_name)
    files = [f"{folder_name}/{f}" for f in files]
    # sort by ascending iteration number
    print("Sorting files")
    # files = sorted(files, key = lambda x: int(x.split(".")[-2]))
    build_csv_inner(files, [label]*len(files), skip=0, OUT_FOLDER=OUT_FOLDER)


def build_csv_inner(filenames, label, size=(100, 100), skip=0, OUT_FOLDER="original"):
    print("Binaries", len(filenames))
    # use this ID to identify the row with the NPY file
    ID = 0
    with open(f"{OUT_FOLDER}/dataset.csv", 'w') as file:
        writer = csv.writer(file)

        # write the header
        writer.writerow([
            "Name", "Width", "Height", "NYPID", "CLASS"
        ])
        counter = 0
        for (f, class_) in zip(filenames, label):
            # print(f)
            if skip == 0:
                if counter % 100 == 99:
                    print(
                        f"Enqueueing {counter}/{len(filenames)} ({100*counter/len(filenames):.2f})%")
                try:
                    q.put([ID, f, class_])

                except KeyboardInterrupt:
                    break
                except Exception as e:
                    print(e)
                    continue
            else:
                skip -= 1
            ID += 1
            counter += 1

        consumers = [ConsumerThread(
            name=f'consumer{i}', csv_folder=OUT_FOLDER, size=size) for i in range(16)]

        for c in consumers:
            c.start()
        for c in consumers:
            c.join()

        #print(f"open {last} {steps} {first}")


def build_csv(size=(100, 100)):

    filenames = sys.argv[1::2]
    label = sys.argv[2::2]

    build_csv_inner(filenames, label, size)


if __name__ == "__main__":
    # sys.argv[2] is the output folder name
    build_csv_from_folder(sys.argv[1], label=sys.argv[3])
