// Problem:   Make a triangle! (Codeforces 1064A)
// Link:      https://codeforces.com/contest/1064/problem/A
// Rating:    800   Tags: brute force, geometry, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-15 18:13 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll a, b, c;

int main(){
    cin >> a >> b >> c;
    if(max(a,max(b,c)) >= ((a+b+c)-max(a,max(b,c)))){
            cout << max(a,max(b,c)) - ((a+b+c)-max(a,max(b,c))) + 1 << endl;
    }
    else cout << 0 << endl;
    return 0;
}
