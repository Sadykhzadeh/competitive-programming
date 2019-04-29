// Problem:   Prefix Sum Primes (Codeforces 1150C)
// Link:      https://codeforces.com/contest/1150/problem/C
// Rating:    1200   Tags: constructive algorithms, greedy, math, number theory
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-29 18:06 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq(x)  cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007

using namespace std;

#include <bits/stdc++.h>

int main(){
        F_READ;
    ll n, cnt_a, cnt_b;
    cnt_a = cnt_b = 0;
    cin >> n;
    vector <ll> a(n);
    for(ll i = 0; i < n; i++){
        ll t; cin >> t;
        a.pb(t);
        if(t == 1) cnt_a++; 
        else cnt_b++;
    }
    if(cnt_b > 0){cout << 2 << ' ';cnt_b--;}
    if(cnt_a > 0){cout << 1 << ' ';cnt_a--;}
    while(cnt_b--){
        cout << 2 << ' ';
    }
    while(cnt_a--){
        cout << 1 << ' ';
    }
    return cout << endl, 0;
}
