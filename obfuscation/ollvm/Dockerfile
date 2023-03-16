FROM archlinux

RUN pacman -Syu --needed base-devel --noconfirm
RUN pacman -S git cmake ninja python3 --noconfirm

RUN git clone https://github.com/HakonHarnes/pluto-wasm-obfuscator.git

WORKDIR /pluto-wasm-obfuscator

RUN ./build.sh

ENV PATH="$PATH:/pluto-wasm-obfuscator/build/bin"

WORKDIR /
