// Problem:   Prime Minister (Codeforces 1178A)
// Link:      https://codeforces.com/contest/1178/problem/A
// Rating:    800   Tags: greedy
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-07-20 16:45 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
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
#define MOD 1000000007LL
#define line cout << endl << endl << "========================" << endl
#define COUT(x) return cout << x << endl, 0;
#define stop return 0
using namespace std;

#include <bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#define endl "\n"

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS

ll n, sum = 0;
vector <pair <ll, ll> > a;

int main(){
    F_READ;
    cin >> n;
    for(ll i= 0; i < n; i++){
        ll z;
        cin >> z; if(i)sum += z;
        a.pb({z, i + 1});
    }
    sort(a.begin() + 1, a.end()); vector <ll> ans; ll x = a[0].first;
    for(ll i = 1; i < n; i++){
        if(a[0].first >= a[i].first * 2){
           ans.pb(a[i].second); sum -= a[i].first; x += a[i].first;
        }
    }
    if(!ans.size()){
        if(a[0].first > sum) return cout << 1 << endl << 1 << endl, 0;
        return cout << 0 << endl, 0;
    }
    if(sum < x){
        cout << ans.size() + 1 << endl; cout << 1 << ' ';
        for(ll i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
    }
    else cout << 0 << endl;
    stop;
}
