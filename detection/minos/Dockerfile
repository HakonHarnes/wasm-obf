FROM python:latest

WORKDIR /minos/src

COPY src/requirements.txt ./ 

RUN pip install -r requirements.txt

WORKDIR /minos 

COPY . .

cmd ["python", "run_minos.py"]
