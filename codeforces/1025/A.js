// Problem:   Doggo Recoloring (Codeforces 1025A)
// Link:      https://codeforces.com/contest/1025/problem/A
// Rating:    900   Tags: implementation, sortings
// Language:  Node.js
// Submitted: 2020-06-28 10:50 UTC
// Verdict:   Accepted

const mainFunction = (lines) => {
    let s = lines[1].split("")
    console.log((s.length == 1) ? "YES" : (s.length != Array.from(new Set(s)).length) ? "YES" : "NO")
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
