// Problem:   Table Tennis Game 2 (Codeforces 765C)
// Link:      https://codeforces.com/contest/765/problem/C
// Rating:    1200   Tags: math
// Language:  Node.js
// Submitted: 2020-06-27 10:49 UTC
// Verdict:   Accepted

const mainFunction = (lines) => {
    let k, a, b;
    [k, a, b] = lines[0].split(" ").map(Number)
    let c = Math.floor(a / k),
        d = Math.floor(b / k),
        cc = a % k,
        dd = b % k
    console.log((cc && !d) || (dd && !c) ? -1 : c + d)
}

const { EOL } = require('os'),
    fs = require("fs");
if (__filename.substr(9, 4) != "azer") {
    let yourInput = ''
    process.stdin.on('data', i => yourInput += i)
    process.stdin.on('end', () => mainFunction(yourInput.split(EOL)))
} else {
    mainFunction(fs.readFileSync('input.txt', 'utf8').split(EOL))
}
