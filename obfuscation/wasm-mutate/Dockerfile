FROM python:latest

RUN apt-get update && \
  apt-get install -y curl && \
  curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y

ENV PATH="$PATH:/root/.cargo/bin"

RUN cargo install wasm-tools

WORKDIR /app

COPY requirements.txt .

RUN pip install -r requirements.txt

COPY main.py .

CMD ["python", "main.py"]
