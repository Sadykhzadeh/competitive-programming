// Problem:   Lose it! (Codeforces 1176C)
// Link:      https://codeforces.com/contest/1176/problem/C
// Rating:    1300   Tags: dp, greedy, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-07-23 21:58 UTC
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

#define MAX 1000099

int main() {
    ll n;
    cin>>n;
    ll i,x;
    vector<ll>v(6,0);
    for(i=0;i<n;i++){
        cin>>x;
        if(x==4){
            v[0]++;
        }
        if(x==8){
            if(v[1]+1<=v[0]){
                v[1]++;
            }
        }
        if(x==15){
            if(v[2]+1<=v[1]){
                v[2]++;
            }
        }
        if(x==16){
            if(v[3]+1<=v[2]){
                v[3]++;
            }
        }
        if(x==23){
            if(v[4]+1<=v[3]){
                v[4]++;
            }
        }
        if(x==42){
            if(v[5]+1<=v[4]){
                v[5]++;
            }
        }
    }
    return cout << n - v[5] * 6 << endl, 0;
}
