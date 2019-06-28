// Problem:   Vus the Cossack and Numbers (Codeforces 1186D)
// Link:      https://codeforces.com/contest/1186/problem/D
// Rating:    1500   Tags: constructive algorithms, greedy, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-28 10:25 UTC
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

ll n;
ll a[200000];
long double b[200000];

int main(){
    F_READ;
    cin >> n; ll sum = 0;
    for(ll i = 0; i < n; i++){
        long double temp;
        cin >> temp ; b[i] = temp;
        ll temp1 = floor(temp);
        if((ll)temp != temp) a[i] = temp1 + 1, sum+=(temp1 + 1);
        else a[i] = temp1, sum += temp;
    }
    if(sum == 0){
        for(ll i = 0; i < n; i++) cout << a[i] << endl; stop;
    }
    if(sum > 0){
        for(ll i = 0; i < n && sum > 0; i++){
            if(a[i]>0 && (ll)b[i]!=b[i]){a[i]--;sum--;}
            elif(a[i]<0 && (ll)b[i]!=b[i]){a[i]--;sum--;}
        }
    }
    if(sum == 0){
         for(ll i = 0; i < n; i++) cout << a[i] << endl; stop;
    }
    if(sum < 0)
    for(ll i = 0; i < n && sum < 0; i++){
        if(a[i]>0 && (ll)b[i]!=b[i]){a[i]++;sum++;}
        elif(a[i]<0 && (ll)b[i]!=b[i]){a[i]++;sum++;}
    }
    for(ll i = 0; i < n; i++) cout << a[i] << endl; stop;
}
