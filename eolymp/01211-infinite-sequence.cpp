// Problem:   Infinite Sequence (eolymp 1211)
// Link:      https://eolymp.com/problems/1211
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 11:25 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n, p, q;
map<ll, ll> m;

ll func(ll n, ll p, ll q){
  if(m[n]) return m[n];
  if(!n) return 1;
  return m[n] = func(n / p, p, q) + func(n / q, p, q);
}

int main(){
    cin >> n >> p >> q;
    cout << func(n,p,q) << endl;;
}
