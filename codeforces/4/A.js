// Problem:   Watermelon (Codeforces 4A)
// Link:      https://codeforces.com/contest/4/problem/A
// Rating:    800   Tags: brute force, math
// Language:  Node.js
// Submitted: 2020-05-15 16:00 UTC
// Verdict:   Accepted

process.stdin.resume();
process.stdin.setEncoding('utf8');
var input= '', readline, cout;
process.stdin.on('data', function(chunk) {
    input+=chunk;
});
process.stdin.on('end', function() {
    input = input.split('\n');
    cout = function(data) {process.stdout.write(data+'\n')};
    var inputLineIndex = 0;
    readline = function(){return inputLineIndex>=input.length?undefined:input[inputLineIndex++]};
    process.exit(main() || 0);
});

function main()
{
    let a = readline();
    if(a > 2 && a % 2 === 0) console.log("YES");
    else console.log("NO")
    return 0;
}
