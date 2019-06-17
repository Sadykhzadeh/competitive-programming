// Problem:   CodeForces 637A
// Link:      https://codeforces.com/problemset/problem/637/A
// Language:  GNU G++14 6.4.0
// Submitted: 2019-06-17 13:34 UTC
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

ll n;
vector < pair <ll, ll> > a;
int main(){
    F_READ;
    cin >> n;ll ti = -1, ans = 0;
    for(ll i = 0; i < n; i++){
        ll temp; cin >> temp;
        bool u = false;
        for(ll j = 0; j < a.size(); j++){
            if(a[j].first == temp){a[j].second++;
            if(ti < a[j].second){
                ti = a[j].second;  ans = a[j].first;
            }
            u = true; break;}
        }
        if(!u){
            a.pb({temp, 1});
            if(ti < a[a.size() - 1].second){
                ti = a[a.size() - 1].second;  ans = a[a.size() - 1].first;
            }
        }
    }
    cout << ans << endl;
}
