FROM archlinux

RUN pacman -Syu --needed base-devel --noconfirm
RUN pacman -S git cmake ninja python3 --noconfirm

RUN git clone --depth 1 --branch llvmorg-14.0.6 https://github.com/llvm/llvm-project.git

WORKDIR /llvm-project/llvm

RUN mkdir -p build 

WORKDIR /llvm-project/llvm/build

RUN cmake -G "Ninja" -DCMAKE_INSTALL_PREFIX=/opt/llvm .. 
RUN ninja -j$(($(nproc) / 2))
RUN ninja install

WORKDIR / 

RUN git clone https://github.com/eshard/obfuscator-llvm.git 

WORKDIR /obfuscator-llvm

RUN mkdir -p build

WORKDIR /obuscator-llvm/build

RUN cmake -G "Ninja" -DLLVM_DIR=/opt/llvm/lib/cmake ..
RUN ninja -j$(($(nproc) / 2)) 
