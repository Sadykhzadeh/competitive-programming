// Problem:   Bear and Three Balls (Codeforces 653A)
// Link:      https://codeforces.com/contest/653/problem/A
// Rating:    900   Tags: brute force, implementation, sortings
// Language:  Node.js
// Submitted: 2020-06-13 18:24 UTC
// Verdict:   Accepted

const mainFunction = (lines) => {
    let arr = lines[1].split(" ").map(Number).sort((a, b) => a - b);
    arr = [...new Set(arr)]
    //console.log(arr)
    for(let i = 1; i < arr.length - 1; i++) {
        if( Math.abs(arr[i-1]-arr[i]) == Math.abs(arr[i+1]-arr[i]) && Math.abs(arr[i-1]-arr[i]) == 1 
            && [...new Set([arr[i-1], arr[i], arr[i+1]])].length == 3){
            //console.log([arr[i-1], arr[i], arr[i+1]])
            console.log("YES"); return 0;
        }
    }
    console.log("NO");
}

const { EOL } = require('os')
const fs = require("fs");
if (__filename.substr(9, 4) != "azer") {
    let yourInput = ''
    process.stdin.on('data', i => yourInput += i)
    process.stdin.on('end', () => mainFunction(yourInput.split(EOL)))
} else {
    mainFunction(fs.readFileSync('input.txt', 'utf8').split(EOL))
}
