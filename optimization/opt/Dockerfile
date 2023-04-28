FROM python:latest

# Update package list and install build tools
RUN apt-get update && apt-get install -y \
  git \
  cmake \
  ninja-build \
  build-essential

# Clone the latest Binaryen source code
RUN mkdir -p src build/hikari build/binaryen
RUN git clone https://github.com/WebAssembly/binaryen.git /src/binaryen 

# Update Binaryen submodules 
WORKDIR /src/binaryen 
RUN git checkout ecbebfbee12f2f25af648119604915fc37427f6f
RUN git submodule init
RUN git submodule update

# Build Binaryen
WORKDIR /build/binaryen 
RUN cmake -G "Ninja" /src/binaryen
RUN ninja 
RUN ninja install 

WORKDIR /app

COPY requirements.txt .

RUN pip install -r requirements.txt

COPY main.py .

CMD ["python", "main.py"]
