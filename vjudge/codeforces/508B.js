// Problem:   CodeForces 508B
// Link:      https://codeforces.com/problemset/problem/508/B
// Language:  Node.js 12.6.3
// Submitted: 2020-07-23 09:40 UTC
// Verdict:   Accepted

const mainFunction = (lines) => {
    let n = lines[0].split("")
    for (let i = 0; i < n.length - 1; i++) {
        if (+n[i] % 2 === 0 && +n[n.length - 1] > +n[i]) {
            [n[i], n[n.length - 1]] = [n[n.length - 1], n[i]]
            console.log(n.join(""))
            return 0
        }
    }
    for (let i = n.length; i >= 0; i--) {
        if (+n[i] % 2 === 0 && +n[n.length - 1] < +n[i]) {
            [n[i], n[n.length - 1]] = [n[n.length - 1], n[i]]
            console.log(n.join(""))
            return 0
        }
    }
    console.log(-1)
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
