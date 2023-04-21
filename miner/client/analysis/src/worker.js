/* Very simple worker which tries to find a nonce value to create a cryptonight-hash which
 * is lower than the given target. */

importScripts("cn-r.js"); // imports the cn.js "glue" script generated by emscripten

// webassembly cryptonight is called here.
var cn = Module.cwrap("hash_cn", "string", [
  "string",
  "number",
  "number",
  "number",
]);

// A few helper (string) functions to help us working with the hex string
// which is used

function zeroPad(num, places) {
  var zero = places - num.toString().length + 1;
  return Array(+(zero > 0 && zero)).join("0") + num;
}

function hex2int(s) {
  return parseInt(
    s
      .match(/[a-fA-F0-9]{2}/g)
      .reverse()
      .join(""),
    16
  );
}

function int2hex(i) {
  return zeroPad(i.toString(16), 8)
    .match(/[a-fA-F0-9]{2}/g)
    .reverse()
    .join("");
}

function getRandomInt(min, max) {
  return Math.floor(Math.random() * (max - min + 1)) + min;
}

onmessage = function (e) {
  var jbthrt = e.data;
  var job = jbthrt.job;
  var thrt = jbthrt.throttle;

  var bsuccess = false;
  var hash = "";
  var hexnonce = 0;

  // calculate a cryptonight hash
  var calcHash = function () {
    if (job !== null) {
      var target = hex2int(job.target);
      var inonce = getRandomInt(0, 0xffffffff);
      hexnonce = int2hex(inonce);

      var blob =
        job.blob.substring(0, 78) +
        hexnonce +
        job.blob.substring(86, job.blob.length);

      try {
        // hash = cn(blob, job.height);

        if (job.algo === "cn") hash = cn(blob, 0, job.variant, job.height);
        else if (job.algo === "cn-lite")
          hash = cn(blob, 1, job.variant, job.height);
        else if (job.algo === "cn-pico")
          hash = cn(blob, 2, job.variant, job.height);
        else if (job.algo === "cn-half")
          hash = cn(blob, 3, job.variant, job.height);
        else if (job.algo === "cn-rwz")
          hash = cn(blob, 4, job.variant, job.height);
        else throw "algorithm not supported!";

        var hashval = hex2int(hash.substring(56, 64));
        bsuccess = hashval < target;
      } catch (err) {
        throw err;
      }
    }
  };

  // submit a cryptonight hash
  var submit = function () {
    if (bsuccess) {
      var msg = {
        identifier: "solved",
        job_id: job.job_id,
        nonce: hexnonce,
        result: hash,
      };
      postMessage(JSON.stringify(msg));
    } else {
      postMessage("nothing");
    }
  };

  if (thrt === 0) {
    calcHash();
    submit();
  } else {
    var t0 = performance.now();
    calcHash();
    var dt = performance.now() - t0;

    var sleept = Math.round((thrt / (100 - thrt + 10)) * dt);
    setTimeout(submit, sleept);
  }
};
