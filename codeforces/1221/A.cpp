// Problem:   2048 Game (Codeforces 1221A)
// Link:      https://codeforces.com/contest/1221/problem/A
// Rating:    1000   Tags: brute force, greedy, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-19 15:51 UTC
// Verdict:   Accepted

typedef long long ll;
typedef unsigned long long ull;
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
#define mod(x, m) ((x) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007LL
#define line cout << endl << endl << "========================" << endl
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

ll t;
ll n;

int f(ll x){
    switch(x){
    case 1:
        return 0;
    case 2:
        return 1;
    case 4:
        return 2;
    case 8:
        return 3;
    case 16:
        return 4;
    case 32:
        return 5;
    case 64:
        return 6;
    case 128:
        return 7;
    case 256:
        return 8;
    case 512:
        return 9;
    case 1024:
        return 10;
    case 2048:
        return 11;
    }
}

int main(){
    F_READ;
    cin >> t;
    while(t--){
        cin >> n;
        ll a[12] = {0}, k(-1);
        for(ll i = 0; i < n; i++){
            ll temp; cin >> temp;
            if(temp <= 2048){a[f(temp)]++;k=max(k,temp);}
        }
        if(k == 2048){
            cout << "yes" << endl;
            continue;
        }
        //for(ll i = 0; i < 12; i++) cout << mas[i] << ' '; cout << endl;
        for(ll i = 1; i < 12; i++){
            a[i] += a[i-1]/2;
        }
        if(a[11]>0)cout << "yes" << endl; else cout << "no" << endl;
    }
}
