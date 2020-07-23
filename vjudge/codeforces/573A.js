// Problem:   CodeForces 573A
// Link:      https://codeforces.com/problemset/problem/573/A
// Language:  Node.js 12.6.3
// Submitted: 2020-07-23 09:01 UTC
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
    for (let i of arr) {
        let qwe = Math.floor(i / res)
        while (qwe % 6 === 0 && qwe != 1) qwe /= 6;
        while (qwe % 2 === 0 && qwe != 1) qwe /= 2;
        while (qwe % 3 === 0 && qwe != 1) qwe /= 3;
        if (qwe != 1) {
            console.log("NO")
            return 0;
        }
    }
    console.log("YES")
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
