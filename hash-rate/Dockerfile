FROM python:latest

RUN apt-get update && apt-get install -y curl unzip gnupg2 wget --no-install-recommends \
  && curl -sS -o - https://dl-ssl.google.com/linux/linux_signing_key.pub | apt-key add - \
  && echo "deb [arch=amd64] http://dl.google.com/linux/chrome/deb/ stable main" >> /etc/apt/sources.list.d/google.list \
  && apt-get update && apt-get install -y google-chrome-stable \
  && rm -rf /var/lib/apt/lists/*

ENV PATH="/usr/bin/google-chrome:${PATH}"

WORKDIR /app

COPY requirements.txt ./ 

RUN pip install -r requirements.txt

WORKDIR /app

COPY . .

CMD ["python", "main.py"]
