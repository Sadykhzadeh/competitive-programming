// Problem:   Bad Ugly Numbers (Codeforces 1326A)
// Link:      https://codeforces.com/contest/1326/problem/A
// Rating:    1000   Tags: constructive algorithms, number theory
// Language:  Node.js
// Submitted: 2020-06-13 10:11 UTC
// Verdict:   Accepted

const mainFunction = (lines) => {
    let n = +lines[0];
    for(let i = 1; i < n + 1; i++) {
        let qwe = +lines[i];
        if(qwe != 1){ qwe--;
            let ans = "2";
            while(qwe--) ans += '3';
            console.log(ans);
        }
        else console.log(-1);
    }
}

const {EOL} = require('os')
const fs = require("fs");
if(__filename.substr(9,4) != "azer"){  
    let yourInput = ''
    process.stdin.on('data', i => yourInput += i)
    process.stdin.on('end', () => mainFunction(yourInput.split(EOL)))
} else {
    mainFunction(fs.readFileSync('input.txt', 'utf8').split(EOL))
}
