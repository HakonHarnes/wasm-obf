// NOTE: cn-pico, cn-half, and cn-r accepted by gulf.moneroocean.stream

const fs = require("fs");
const path = require("path");
const seedrandom = require("seedrandom");

// Parse command-line arguments
const args = process.argv.slice(2);
const fileArg = args.find((arg) => arg.startsWith("--file="));
const nameArg = args.find((arg) => arg.startsWith("--name="));
const iterationsArg = args.find((arg) => arg.startsWith("--iterations="));

if (!fileArg || !nameArg || !iterationsArg) {
  console.error(
    "Usage: node script.js --file=<file> --name=<name> --iterations=<iterations>"
  );
  process.exit(1);
}

const file = fileArg.split("=")[1];
const name = nameArg.split("=")[1];
const iterations = iterationsArg.split("=")[1];

const wasmModule = require(file);

async function initModule() {
  return new Promise((resolve) => {
    wasmModule.onRuntimeInitialized = () => {
      resolve(wasmModule);
    };
  });
}

function int2hex(intValue) {
  return intValue.toString(16).padStart(8, "0");
}

function getRandomInt(min, max, rng) {
  min = Math.ceil(min);
  max = Math.floor(max);
  return Math.floor(rng() * (max - min + 1)) + min;
}

async function runWasm() {
  const wasmInstance = await initModule();

  const cn = wasmInstance.cwrap("hash_cn", "string", [
    "string",
    "number",
    "number",
    "number",
  ]);

  const data = fs.readFileSync(path.join(__dirname, "data.json"));
  const jobs = JSON.parse(data);
  const jobIndex = jobs.findIndex((job) => job.algo === name);

  if (jobIndex !== -1) {
    const job = jobs[jobIndex];

    // Start hashing
    const rngSeed = "beetlejuice";
    const rng = seedrandom(rngSeed);

    for (let i = 0; i < iterations; i++) {
      const inonce = getRandomInt(0, 0xffffffff, rng);
      const hexnonce = inonce.toString(16).padStart(8, "0");
      const blob =
        job.blob.substring(0, 78) +
        hexnonce +
        job.blob.substring(86, job.blob.length);
      const hash = cn(blob, 0, 1, job.height);
      console.log(
        `[${i + 1}/${iterations}]`.padEnd(15) +
          `${hash}`.padEnd(75) +
          `${job.hashes[i]}`
      );

      // Compare the computed hash with the corresponding hash in job.hashes
      if (job.hashes[i] !== hash) {
        console.error(`Hash mismatch at index ${i}`);
        process.exit(1);
      }
    }

    console.log("All hashes matched.\n");
  }
}

runWasm();
