// Problem:   Watermelon (Codeforces 4A)
// Link:      https://codeforces.com/contest/4/problem/A
// Rating:    800   Tags: brute force, math
// Language:  Node.js
// Submitted: 2020-05-16 09:44 UTC
// Verdict:   Accepted

process.stdin.resume();
process.stdin.setEncoding('utf8');
let input= '', cin, cout;
process.stdin.on('data', (chunk) => input+=chunk);
process.stdin.on('end', () => {
    input = input.split('\n');
    cout = (data) => process.stdout.write(data+'\n');
    var inputLineIndex = 0;
    cin = function(){return inputLineIndex>=input.length?undefined:input[inputLineIndex++]};
    process.exit(main() || 0);
});

function main(){
    let a = cin();
    if(a > 2 && a % 2 === 0) cout("YES");
    else cout("NO");
    return 0;
}
