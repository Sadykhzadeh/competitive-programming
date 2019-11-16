// Problem:   Subsequence (eolymp 988)
// Link:      https://eolymp.com/problems/988
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-11-16 07:30 UTC
// Verdict:   Accepted

typedef long long ll;
typedef unsigned long long ull;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/
#define qq2(x,y) cerr << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define qq(x) cerr << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((x) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define line cerr << endl << endl << "========================" << endl
#define COUT(x) return cout << (x) << endl, 0;
#define stop return 0
using namespace std;
#include <bits/stdc++.h>
ll T1 = clock();
void timer(){rus_lang; ll T2(clock());cerr<<"Время: "<<(T2-T1)/1000.<<" секунд."<<endl;
cerr << "Автор: Азер Садыхзаде";}
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

ll n;
int a[1000], s[900];
vector <ll> v;

int main(){
    F_READ;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    v.pb(a[0]);
    s[0] = 1;
    ll pos;
    for(ll i = 1; i < n; i++){
        int pos = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
        if((pos) == v.size()){
            v.pb(a[i]);
        }
        else v[(pos)] = a[i];
        s[i] = (pos) + 1;
    }
    ll ans = 0;
    for(ll i = 1; i < n; i++){
        ans = max(ans, (ll)s[i]);
    }
    cout << ans << endl;
}
