// Problem:   Registration System (Codeforces 4C)
// Link:      https://codeforces.com/contest/4/problem/C
// Rating:    1300   Tags: data structures, hashing, implementation
// Language:  Node.js
// Submitted: 2020-07-15 14:59 UTC
// Verdict:   Accepted

const mainFunction = (lines) => {
    let n = +lines[0],
        map = new Map()
    for (let i = 1; i <= n; i++) {
        let string = lines[i]
        if (map.has(string)) {
            let key = +map.get(string)
            map.delete(string)
            map.set(string, ++key)
            console.log(string + map.get(string))
        } else {
            map.set(string, 0)
            console.log("OK")
        }
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
