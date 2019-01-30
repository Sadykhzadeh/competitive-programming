// Problem:   Fraction (Codeforces 854A)
// Link:      https://codeforces.com/contest/854/problem/A
// Rating:    800   Tags: brute force, constructive algorithms, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-01-30 22:14 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n, k, c, d;

int main(){
    cin >> n;
    for(ll i = 1; i < n; i++){
        for(ll j = n; j > i; j--){
            if(__gcd(i,j) == 1){
                    if(i + j == n){
                        c = i;
                        d = j;
                    }
            }
        }
        if(k == 1) break;
    }
    cout << c << ' ' << d << endl;
    return 0;
}
