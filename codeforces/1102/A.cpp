// Problem:   Integer Sequence Dividing (Codeforces 1102A)
// Link:      https://codeforces.com/contest/1102/problem/A
// Rating:    800   Tags: math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-01-09 15:47 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>


ll n;

int main(){
    cin >> n;
    while(n >= 5){
        n-=4;
    }
    if(n == 3 || n == 4) cout << 0 << endl;
    else cout << 1 << endl;
    
    return 0;
}
