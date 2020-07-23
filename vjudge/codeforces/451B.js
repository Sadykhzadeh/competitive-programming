// Problem:   CodeForces 451B
// Link:      https://codeforces.com/problemset/problem/451/B
// Language:  Node.js 12.6.3
// Submitted: 2020-07-23 10:04 UTC
// Verdict:   Accepted

let isSorted = arr => arr.every((v, i, a) => !i || a[i - 1] <= v)
const mainFunction = (lines) => {
    let arr = lines[1].split(" ").map(Number),
        sortedArr = lines[1].split(" ").map(Number),
        n = arr.length,
        cnt = 0,
        mas = []
    sortedArr.sort((a, b) => a - b)
        //console.log(arr, sortedArr)
    for (let i in arr) {
        if (arr[i] != sortedArr[i]) {
            cnt++;
            mas.push(+i + 1)
        }
    }
    if (cnt > 2) console.log("no")
    else if (!cnt) console.log(`yes\n1 1`)
    else console.log(`yes\n${mas.sort((a,b) => a - b).join(' ')}`)
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
