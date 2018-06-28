// Problem:   Pizza, Pizza, Pizza!!! (Codeforces 979A)
// Link:      https://codeforces.com/contest/979/problem/A
// Rating:    1000   Tags: math
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-28 09:24 UTC
// Verdict:   Accepted

#include <iostream>
#include <string>
using namespace std;

int main(){
    long long n;
    cin >> n;
    if(n == 0) cout << 0;
    else if((n+1) % 2 == 0) cout << (n+1)/2;
    else cout << n +1 ;
    cout << endl;
    return 0;
}
