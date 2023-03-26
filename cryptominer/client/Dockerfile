FROM node:14-alpine

WORKDIR /app

COPY client/package*.json ./
RUN npm install
RUN npm install -g http-server

COPY client/ ./

CMD ["http-server", ".", "-p", "8080", "--no-cache"]
