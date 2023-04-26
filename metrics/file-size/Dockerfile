FROM python:latest

WORKDIR /app

COPY requirements.txt ./ 

RUN pip install -r requirements.txt

WORKDIR /app

COPY . .

CMD ["python", "main.py"]
