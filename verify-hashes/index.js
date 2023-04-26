const fs = require("fs");
const wasmModule = require("./cn-r.js");

async function initModule() {
  return new Promise((resolve) => {
    wasmModule.onRuntimeInitialized = () => {
      resolve(wasmModule);
    };
  });
}

function hex2int(hexString) {
  return parseInt(hexString, 16);
}

async function runWasm() {
  const wasmInstance = await initModule();

  const cn = wasmInstance.cwrap("hash_cn", "string", [
    "string",
    "number",
    "number",
    "number",
  ]);

  let i = 0;

  const data = fs.readFileSync("./jobs.json");
  const jobs = JSON.parse(data);
  const job = jobs.filter((job) => job.variant === 4)[0];

  let solvedJob = false;

  while (i < 100000 && !solvedJob) {
    const hash = cn(job.blob, job.lite, job.variant, job.height);

    i++;

    const hashval = parseInt(hash.substring(56, 64), 16);
    solvedJob = hashval < job.target;
    console.log(i, hashval, job.target, solvedJob);
  }
}

runWasm();
