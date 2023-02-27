FROM python:latest

WORKDIR /analysis

COPY scripts/requirements.txt ./ 

RUN pip install -r requirements.txt

COPY . .

CMD ["python", "main.py"]
