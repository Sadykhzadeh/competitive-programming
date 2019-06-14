// Problem:   Tavas and SaDDas (Codeforces 535B)
// Link:      https://codeforces.com/contest/535/problem/B
// Rating:    1100   Tags: bitmasks, brute force, combinatorics, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-14 08:12 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> Azer_Sadykhzadeh
Programming Language: C++
*/
#define qq2(x,y) cout << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define COUT(x) return cout << x << endl, 0;
#define Goodbye return 0

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;

#include <bits/stdc++.h>

vector <ll> vec;

void rec(ll n, ll x){
    if (n == 10) return;
    else{
        vec.pb(x);
        ll a = x * 10 + 4, b = x * 10 + 7;
        rec(n + 1, a); rec(n + 1,b);
    }
}
int main(){
    rec(1,4); rec(1,7);
    F_READ;
    ll n;
    cin >> n;
    sort(vec.begin(),vec.end());
    for(ll i = 0; i <= (ll)vec.size() - 1; i++){
        if(vec[i] == n) cout << i + 1;
    }
    Goodbye;
}
