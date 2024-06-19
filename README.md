# wasm-obf: WebAssembly obfuscation

This repository contains the source code and experimental data derived from research on WebAssembly obfuscation.
It has been developed as a part of my Master's thesis in Computer Science at the Norwegian University of Science and Technology (NTNU).
The thesis can be found [here](https://ntnuopen.ntnu.no/ntnu-xmlui/handle/11250/3118533) and the paper can be found [here](https://arxiv.org/abs/2403.15197).
The experimental data, containing close to 50,000 WebAssembly binaries, can be found under the [releases](https://github.com/HakonHarnes/wasm-obf/releases/tag/v1.0).

## Structure

- [Analysis](https://github.com/HakonHarnes/wasm-obf/tree/main/analysis) contains the data and code to create the plots used in the thesis.
- [Dataset](https://github.com/HakonHarnes/wasm-obf/tree/main/dataset) contains the source code and build files for the applications in the dataset.
- [Detection](https://github.com/HakonHarnes/wasm-obf/tree/main/detection) contains the source code of the cryptomining detection methods.
- [Metrics](https://github.com/HakonHarnes/wasm-obf/tree/main/metrics) contains code for measuring the file size, hash rate, and similarity between WebAssembly binaries.
- [Miner](https://github.com/HakonHarnes/wasm-obf/tree/main/miner) contains code for the web-based cryptominer.
- [Mongodb](https://github.com/HakonHarnes/wasm-obf/tree/main/mongodb) contains code relating to the mongodb database.
- [Obfuscation](https://github.com/HakonHarnes/wasm-obf/tree/main/obfuscation) contains code for obfuscating the WebAssembly binaries.
- [Optimization](https://github.com/HakonHarnes/wasm-obf/tree/main/optimization) contains code for optimizing the WebAssembly binaries.
- [Verify hashes](https://github.com/HakonHarnes/wasm-obf/tree/main/verify-hashes) contains code for verifying the hashes of the cryptomining WebAssembly binaries.

## Requirements

- Python 3
- Docker

## Setup

Some of the docker containers require specific networks to be setup.
Specifically, a database, miner, and WASim network will need to be created:

```
docker network create db_network
docker network create mn_network
docker network create wasim_network
```

## Usage

### Starting the database

```
cd mongodb
docker compose run mongodb
```

The database must run before running the experiments.

### Building the dataset

```
cd dataset
docker compose run build-dataset
```

This will build the applications in the dataset folder using Emscripten and move the WebAssembly binaries, as well as the accompanying JavaScript glue code and HTML file to the binaries folder.

### Obfuscating the WebAssembly binaries

```
cd obfuscation
docker compose run <method>
```

where `<method>` is either `tigress`, `llvm`, or `wasm-mutate`.

### Running cryptomining detection

```
cd detection
docker compose run <method>
```

where `<method>` is either `minos`, `miner-ray`, `virustotal`, or `wasim`.

### Measuring file size and distance

```
cd metrics
docker compose run file-size
docker compose run dtw
```

### Measure the hash rate

First, start the miner:

```
cd miner
docker compose up
```

Then, navigate back to `metrics` and run:

```
cd ../metrics
docker compose run hash-rate
```

### Verifying the hashes

```
cd verify-hashes
docker compose run verify-hashes
```

### Extracting V8 bytecode

```
cd optimization
docker compose run v8-stats
```

This will create a `.v8` file in the `binaries` folder with the extracted V8 data.

### Optimizing the WebAssembly binaries

```
cd optimization
docker compose run opt
```

The database will then need to be reset before re-running the experiment with the optimized WebAssembly binaries.
