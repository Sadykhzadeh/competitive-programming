// Problem:   Another One Bites The Dust (Codeforces 1148A)
// Link:      https://codeforces.com/contest/1148/problem/A
// Rating:    800   Tags: greedy
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-10 08:57 UTC
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

ll a, b, ab;

int main(){
    cin >> a >> b >> ab;
    if(a == b && a == ab) return cout << a * 4 << endl, 0;
    ll ans = 0;
    ans += min(a, b)*2; ll temp = a; a -= min(a, b); b -= min(temp,b);
    ans += ab*2;
    if(a > 0) ans++;
    if(b > 0) ans++;
    cout << ans << endl;
    return 0;
}
