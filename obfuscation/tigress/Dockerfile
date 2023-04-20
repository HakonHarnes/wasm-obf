FROM archlinux:base-devel-20230312.0.133040

RUN pacman -Syyu git wget emscripten unzip vim python python-pip --noconfirm

# Clone Emscripten
WORKDIR /usr/lib
RUN git clone https://github.com/emscripten-core/emsdk.git

# Install Emscripten
WORKDIR /usr/lib/emsdk
RUN ./emsdk install 3.0.0
RUN ./emsdk activate 3.0.0

# Configure Tigress
COPY tigress /usr/local/bin/tigress/
ENV PATH="$PATH:/usr/local/bin/tigress/3.3.2:/usr/lib/emsdk:/usr/lib/emsdk/node/14.18.2_64bit/bin:/usr/lib/emsdk/upstream/emscripten"
ENV TIGRESS_HOME="/usr/local/bin/tigress/3.3.2"
ENV EMSDKPATH="/usr/lib/emsdk/upstream/include/c++/v1"
ENV CIL_MACHINE="short=2,2 int=4,4 long=4,4 long_long=8,8 pointer=4,4 alignof_enum=4 float=4,4 double=8,8 long_double=8,8 void=1 bool=1,1 fun=1,4 alignof_string=1 max_alignment=16 size_t=unsigned_long wchar_t=int char_signed=true const_string_literals=true big_endian=false __thread_is_keyword=true __builtin_va_list=true underscore_name=true"

# Cache emscripten libraries
RUN echo 'int main() { return 0; }' | \
  emcc -xc - \
  -sUSE_SDL=2 \
  -sUSE_SDL_MIXER=2 \
  -sUSE_ZLIB=1 \
  -sUSE_OGG=1 \
  -sUSE_VORBIS=1 \
  -o /dev/null -v

# Configure app
WORKDIR /app
COPY requirements.txt .
RUN pip install -r requirements.txt
COPY main.py .
CMD ["python", "main.py"]
