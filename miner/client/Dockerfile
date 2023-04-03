FROM node:14-alpine

WORKDIR /app

RUN npm install -g http-server

COPY client/ ./

CMD ["http-server", ".", "-p", "8080", "--no-cache"]
