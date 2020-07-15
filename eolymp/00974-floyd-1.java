// Problem:   Floyd - 1 (eolymp 974)
// Link:      https://eolymp.com/problems/974
// Language:  JavaScript (node 16)
// Submitted: 2020-07-15 14:08 UTC
// Verdict:   Accepted

const mainFunction = (lines) => {
    let arr = [],
        n = +lines[0]
    for (let i = 1; i <= n; i++) {
        let ar = lines[i].split(" ").map(Number)
        arr.push(ar)
    }
    for (let k = 0; k < n; k++)
        for (let i = 0; i < n; i++)
            for (let j = 0; j < n; j++)
                if (arr[i][k] + arr[k][j] < arr[i][j])
                    arr[i][j] = (arr[i][k] + arr[k][j])
    for (let i = 0; i < n; i++) {
        let out = ""
        for (let j = 0; j < n; j++) {
            out += arr[i][j] + " ";
        }
        console.log(out)
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
