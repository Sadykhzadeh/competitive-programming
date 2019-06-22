// Problem:   Polycarp's Pockets (Codeforces 1003A)
// Link:      https://codeforces.com/contest/1003/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-22 17:34 UTC
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
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define COUT(x) return cout << x << endl, 0;
#define stop return 0

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

#include <bits/stdc++.h>
#define endl "\n"

vector <ll> a;
ll n;

int main(){
    F_READ;
    cin >> n; a.resize(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    if(n == 1) return cout << 1<< endl, 0;
    sort(a.begin(), a.end());
    ll ans = 1, ma = -1; ll k = -1;
    for(ll i = 0; i < n; i++){
        if(ma < a[i]){
            ma = a[i]; ans = max(ans, k); k = 1;
        }
        elif(a[i] == ma) k++;
    }
    ans = max(ans, k);
    return cout << ans << endl, 0;
}
