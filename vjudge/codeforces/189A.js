// Problem:   CodeForces 189A
// Link:      https://codeforces.com/problemset/problem/189/A
// Language:  Node.js 12.6.3
// Submitted: 2020-07-23 08:15 UTC
// Verdict:   Accepted

const mainFunction = (lines) => {
    let n, a, b, c, ans = -1;
    [n, a, b, c] = lines[0].split(" ").map(Number)
    for (let i = 0; i <= 4000; i++) {
        for (let j = 0; j <= 4000; j++) {
            let asd = i * a,
                zxc = j * b,
                z = (n - asd - zxc)
            if (z > 0 && z % c === 0) {
                z /= c
                if (i + j + z > ans)
                    ans = i + j + z
            }
            if (asd + zxc === n)
                if (i + j > ans)
                    ans = i + j
        }
    }
    console.log(ans)
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
