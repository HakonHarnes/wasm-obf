FROM python:latest

WORKDIR /app/src

COPY src/requirements.txt ./ 

RUN pip install -r requirements.txt

WORKDIR /app 

COPY . .

CMD ["python", "main.py"]
