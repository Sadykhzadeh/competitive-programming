// Problem:   Book (eolymp 2399)
// Link:      https://eolymp.com/problems/2399
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-11 19:14 UTC
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

vector <ll> a;

ll sum(ll x){
    ll ans = 0;
    while(x){
        ans += (x % 10);
        x/=10;
    }
    return ans;
}

int main(){
    F_READ;
    ll k = 1;
    while(k < 5500){
        a.pb(k);
        k+=sum(k);
    }
    ll n;
    cin >> n;
    ll L, R, mid;
    L = 0, R = a.size() - 1;
    while(L <= R){
        mid = (L + R) / 2;
        if(a[mid] < n){
            L = mid + 1;
        }
        elif(a[mid] > n){
            R = mid - 1;
        }
        else return cout << mid + 1 << endl, 0;
    }
    cout << L << endl;
}
