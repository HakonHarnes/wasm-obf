FROM python:latest

# Install necessary dependencies
RUN apt-get update && \
  apt-get install -y git cmake build-essential

# Clone WABT repository with submodules and build it
RUN git clone --recursive https://github.com/WebAssembly/wabt && \
  cd wabt && \
  git submodule update --init && \
  mkdir build && \
  cd build && \
  cmake .. && \
  cmake --build . && \
  make install && \
  cd ../../ && \
  rm -rf wabt

# Cleanup
RUN apt-get remove -y git cmake build-essential && \
  apt-get autoremove -y && \
  apt-get clean && \
  rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY requirements.txt ./
RUN pip install --no-cache-dir -r requirements.txt

COPY . .

CMD ["python", "main.py"]
