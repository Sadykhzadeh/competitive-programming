// Problem:   Digital root (eolymp 3937)
// Link:      https://eolymp.com/problems/3937
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-30 20:14 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll sum(ll x){
    if(x < 10) return x;
    else return x / 10 + x % 10;
}

ll Sum(ll x){
    while(x > 9) x = sum(x);
    return x;
}

ll f(ll a, ll b){
    if(Sum(a) == Sum(b)) return a < b;
    return Sum(a) < Sum(b);
}

ll k(0), temp, m[210];

int main(){
    while(cin >> temp){m[k] = temp; k++;}
    sort(m, m + k , f);
    for(ll i = 0; i < k; i++){cout << m[i] << ' ';} cout << endl;
    return 0;
}
