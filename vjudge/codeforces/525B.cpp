// Problem:   CodeForces 525B
// Link:      https://codeforces.com/problemset/problem/525/B
// Language:  GNU G++14 6.4.0
// Submitted: 2019-06-17 14:49 UTC
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

string s;
ll n;
vector <ll> a;

    ll sum[250000];


int main(){
    F_READ;
    cin >> s >> n;
    for(ll i = 0; i < n; i++){
        ll temp; cin >> temp; sum[temp]++;
    }
    ll ans = 0;
    for(ll i = 1; i <= s.size() / 2; i++){
        ans += sum[i];
        if(ans % 2){
            swap(s[i-1],s[s.size()-i]);
        }
    }
    COUT(s);
}
