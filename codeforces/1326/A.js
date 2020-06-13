// Problem:   Bad Ugly Numbers (Codeforces 1326A)
// Link:      https://codeforces.com/contest/1326/problem/A
// Rating:    1000   Tags: constructive algorithms, number theory
// Language:  Node.js
// Submitted: 2020-06-13 07:30 UTC
// Verdict:   Accepted

let yourInputData = ''
process.stdin.on('data', i => yourInputData += i)
process.stdin.on('end', () => {
    const {EOL} = require('os')
    const lines = yourInputData.split(EOL)
    mainFunction(lines)
})

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
