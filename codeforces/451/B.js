// Problem:   Sort the Array (Codeforces 451B)
// Link:      https://codeforces.com/contest/451/problem/B
// Rating:    1300   Tags: implementation, sortings
// Language:  Node.js
// Submitted: 2020-07-23 10:33 UTC
// Verdict:   Accepted

let isSorted = arr => arr.every((v, i, a) => !i || a[i - 1] <= v)
const mainFunction = (lines) => {
    let arr = lines[1].split(" ").map(Number),
        sortedArr = lines[1].split(" ").map(Number),
        mas = []
    if (isSorted(arr)) {
        console.log(`yes\n1 1`)
        return 0
    }
    sortedArr.sort((a, b) => a - b)
    for (let i in arr) {
        if (arr[i] != sortedArr[i])
            mas.push(+i + 1)
    }
    mas.sort((a, b) => a - b)
    arr = arr.slice(mas[0] - 1, mas[mas.length - 1])
    sortedArr = sortedArr.slice(mas[0] - 1, mas[mas.length - 1]).reverse()
    if (arr.join(" ") == sortedArr.join(" ")) console.log(`yes\n${mas[0]} ${mas[mas.length - 1]}`)
    else console.log(`no`)
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
