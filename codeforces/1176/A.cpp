// Problem:   Divide it! (Codeforces 1176A)
// Link:      https://codeforces.com/contest/1176/problem/A
// Rating:    800   Tags: brute force, greedy, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-09 14:38 UTC
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

//#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;

#include <bits/stdc++.h>

ll n;

int main(){
    cin >> n;
    while(n--){
        ll t;
        cin >> t; ll cnt = 0;
        while(t%5 == 0) {t/=5; t*=4; cnt++;}
        while(t%3 == 0) {t/=3; t*= 2; cnt++;}
        while(t%2 == 0) {t/=2; cnt++;}
        if(t == 1) cout << cnt << endl;
        else cout << -1 << endl;
    }
}
