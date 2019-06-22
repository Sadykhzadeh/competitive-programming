// Problem:   Binary String Constructing (Codeforces 1003B)
// Link:      https://codeforces.com/contest/1003/problem/B
// Rating:    1300   Tags: constructive algorithms
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-22 17:58 UTC
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

ll a, b, x;

int main(){
    F_READ;
    cin >> a >> b >> x;
    if(x % 2){
        if(a > b){
            for(ll i = 0; i < x / 2; i++) cout << 0 << 1;
            ll k = a - x / 2, k1 = b - x / 2;
            while(k--) cout << 0;
            while(k1--) cout << 1;
        }
        else{
            for(ll i = 0; i < x / 2; i++) cout << 1 << 0;
            ll k1 = a - x / 2, k = b - x / 2;
            while(k--) cout << 1;
            while(k1--) cout << 0;
        }
    }
    else{
        if(a > b){
            for(ll i = 0; i < x/2; i++){
                cout << 0 << 1;
            }
            ll k = b - x / 2;
            while(k--) cout << 1;
            ll k1 = a - x / 2;
            while(k1--) cout << 0;
        }
        else{
            for(ll i = 0; i < x/2; i++){
                cout << 1 << 0;
            }
            ll k1 = a - x / 2;
            while(k1--) cout << 0;
            ll k = b - x / 2;
            while(k--) cout << 1;
        }
    }
    return 0;
}
