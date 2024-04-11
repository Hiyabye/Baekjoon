const fs = require('fs');
const crypto = require('crypto');

let s = fs.readFileSync('/dev/stdin').toString().trim();
console.log(crypto.createHash('ripemd160').update(s, 'utf-8').digest('hex'));