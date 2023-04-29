# Miner

This folder contains source code for a CryptoNight web miner that supports various CryptoNight variants, excluding RandomX.

The server is developed using C# and can optionally call C-routines to verify hashes computed by clients. It functions as a proxy server for popular mining pools.

The client operates within a browser, utilizing JavaScript and WebAssembly. WebSockets facilitate the connection between the client and the server, while WebAssembly handles hash computations and web workers manage threads.

## Supported Algorithms

| #   | xmrig short notation | webminerpool internal          | description                                      |
| --- | -------------------- | ------------------------------ | ------------------------------------------------ |
| 1   | cn                   | algo="cn", variant=-1          | autodetect cryptonight variant (block.major - 6) |
| 2   | cn/0                 | algo="cn", variant=0           | original cryptonight                             |
| 3   | cn/1                 | algo="cn", variant=1           | also known as monero7 and cryptonight v7         |
| 4   | cn/2                 | algo="cn", variant=2 or 3      | cryptonight variant 2                            |
| 5   | cn/r                 | algo="cn", variant=4           | cryptonight variant 4 also known as cryptonightR |
| 6   | cn-lite              | algo="cn-lite", variant=-1     | same as #1 with memory/2, iterations/2           |
| 7   | cn-lite/0            | algo="cn-lite", variant=0      | same as #2 with memory/2, iterations/2           |
| 8   | cn-lite/1            | algo="cn-lite", variant=1      | same as #3 with memory/2, iterations/2           |
| 9   | cn-pico/trtl         | algo="cn-pico", variant=2 or 3 | same as #4 with memory/8, iterations/8           |
| 10  | cn-half              | algo="cn-half", variant=2 or 3 | same as #4 with memory/1, iterations/2           |
| 11  | cn/rwz               | algo="cn-rwz", variant=2 or 3  | same as #4 with memory/1, iterations\3/4         |

## Usage

```
docker compose up
```

Will start up the client and server. Visit [http://localhost:8080](http://localhost:8080) to start mining in your browser. There is also an endpoint, [http://localhost:8080/analysis](http://localhost:8080/analysis) for measuring the hash rate. See metrics/hash-rate.
