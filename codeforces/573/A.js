// Problem:   Bear and Poker (Codeforces 573A)
// Link:      https://codeforces.com/contest/573/problem/A
// Rating:    1300   Tags: implementation, math, number theory
// Language:  Node.js
// Submitted: 2020-07-23 09:00 UTC
// Verdict:   Accepted

function gcd(a, b) {
    [b, a] = [Math.min(Math.abs(a), Math.abs(b)), Math.max(Math.abs(a), Math.abs(b))]
    while (true) {
        if (!b) return a;
        a %= b;
        if (!a) return b;
        b %= a;
    }
}

const mainFunction = (lines) => {
    let arr = lines[1].split(" ").map(Number),
        res = arr[0]
    arr.forEach(qwe => {
        res = gcd(res, qwe)
    });
    while (res % 6 === 0 && res != 1) res /= 6;
    while (res % 2 === 0 && res != 1) res /= 2;
    while (res % 3 === 0 && res != 1) res /= 3;
    //console.log(res)
    for (let i of arr) {
        let two = 1,
            three = 1
        while (i % (two * 2) === 0) two *= 2;
        while (i % (three * 3) === 0) three *= 3;
        //console.log(res * two * three, i)
        if (res * two * three != i) {
            console.log("No")
            return 0
        }
    }
    console.log("Yes")
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
