const CONFIG = require("../config.json");
const reconnect_attempts = CONFIG.reconnect_attempts || 5;
const reconnect_wait_time = (CONFIG.reconnect_wait_time || 8) * 1000;
const rabbitmq_host = process.env.RABBITMQ_HOST || CONFIG.rabbitmq_host;
const amqplib = require("amqplib");
const task_queue = "tasks";
const response_queue = "responses";
const rabbitEmmiter = require("./rabbit_emitter");

class MQConnector {
  constructor() {
    this.TaskQueue = null;
    this.ResponseQueue = null;
    this.Connection = amqplib.connect(rabbitmq_host);
  }

  init() {
    // Consumer
    let attempts = 0;

    return new Promise((resolve, reject) => {
      const performSetup = () => {
        return this.Connection.then(function (conn) {
          return conn.createChannel().then(function (ch) {
            return ch
              .assertQueue(response_queue, { durable: false })
              .then(function (ok) {
                return ch.consume(response_queue, function (msg) {
                  if (msg !== null) {
                    // console.log(msg.content.toString);
                    rabbitEmmiter.emit(
                      msg.properties.correlationId,
                      msg.content
                    );
                    ch.ack(msg);
                    resolve();
                  }
                });
              });
          });
        }).catch((err) => {
          if (attempts < reconnect_attempts) {
            attempts += 1;
            setTimeout(performSetup, reconnect_wait_time);
          } else {
            reject(err);
          }
        });
      };

      performSetup();
    });
  }

  sendTask(data, uniqueID = "123") {
    // Publisher
    const stringifiedData = JSON.stringify(data);
    return this.Connection.then(function (conn) {
      return conn.createChannel();
    })
      .then(function (ch) {
        return ch
          .assertQueue(task_queue, { durable: false })
          .then(function (ok) {
            ch.sendToQueue(task_queue, Buffer.from(stringifiedData), {
              correlationId: uniqueID,
            });
            ch.close();
          });
      })
      .catch(console.warn);
  }
}

module.exports = MQConnector;
