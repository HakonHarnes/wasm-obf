FROM python:latest

WORKDIR /hash-rate

COPY requirements.txt ./ 

RUN pip install -r requirements.txt

WORKDIR /hash-rate

COPY . .

CMD ["python", "main.py"]
