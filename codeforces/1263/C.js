// Problem:   Everyone is a Winner! (Codeforces 1263C)
// Link:      https://codeforces.com/contest/1263/problem/C
// Rating:    1400   Tags: binary search, math, meet-in-the-middle, number theory
// Language:  Node.js
// Submitted: 2020-07-06 06:49 UTC
// Verdict:   Accepted

const mainFunction = (lines) => {
    let t = +lines[0];
    for (let i = 1; i <= t; i++) {
        let n = +lines[i],
            s = Math.floor(Math.sqrt(n)),
            arr = [];
        for (let j = 0; j <= s; j++) arr.push(j)
        for (let j = 1; j <= s; j++) arr.push(Math.trunc(n / j));
        arr.sort((a, b) => a - b)
        arr = Array.from(new Set(arr))
        console.log(arr.length)
        console.log(arr.join(" "))
    }
}

const { EOL } = require('os')
if (__filename.substr(9, 4) != "azer") {
    let yourInputData = ''
    process.stdin.on('data', i => yourInputData += i)
    process.stdin.on('end', () => mainFunction(yourInputData.split(EOL)))
} else {
    const fileSystem = require("fs");
    mainFunction(fileSystem.readFileSync('input.txt', 'utf8').split(EOL))
}
