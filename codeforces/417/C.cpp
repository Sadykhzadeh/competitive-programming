// Problem:   Football (Codeforces 417C)
// Link:      https://codeforces.com/contest/417/problem/C
// Rating:    1400   Tags: constructive algorithms, graphs, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-14 08:34 UTC
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
#define endl "\n"

ll n, k;

int main(){
    F_READ;
    cin >> n >> k;
    if((n - 1) / 2 < k) COUT(-1);
    cout << n * k << endl;
    for(ll i = 0; i < k; i++){
    	for(ll j = 0; j < n; j++){
			cout << j + 1 << " " << (j + 1 + i) % n + 1 << endl;
    	}
    }
    Goodbye;
}
