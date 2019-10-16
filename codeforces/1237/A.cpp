// Problem:   Balanced Rating Changes (Codeforces 1237A)
// Link:      https://codeforces.com/contest/1237/problem/A
// Rating:    1000   Tags: implementation, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-10-16 15:01 UTC
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
vector <ll> a;

int main(){
    F_READ;
    cin >> n;
    ll sum = 0;
    vector <ll> q,w;
    for(ll i = 0; i < n; i++){
        ll temp; cin >> temp; a.pb(temp/2); sum += (temp/2);
        if(temp%2){
            if(temp > 0) q.pb(i);
            else w.pb(i);
        }
    }
    line;
    if(sum > 0){
        for(ll i = 0; i < n && sum; i++){
            a[w[i]]--;sum--;
        }
    }
    else{
        for(ll i = 0; i < n && sum; i++){
            a[q[i]]++;sum++;
        }
    }
    for(ll i = 0; i < a.size(); i++) cout << a[i] << '\n';
    cout << endl;
    qq(sum);
    timer();
    stop;
}
