// Problem:   Binary Palindromes (Codeforces 1251B)
// Link:      https://codeforces.com/contest/1251/problem/B
// Rating:    1400   Tags: greedy, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-10-24 17:00 UTC
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

ll q;
ll n, zero = 0, one = 0, k = 0, kk = 0, ans = 0;



int main(){
    ios_base::sync_with_stdio ( 0 );
    int q;
    cin >> q;
    while ( q -- ){
        ll n, zero = 0, one = 0, k = 0, kk = 0, ans = 0;
        string s[100];
        cin >> n;
        for(ll i = 0; i < n; i++){
            cin >> s[i];
            string ss = s[i];
            for(ll j = 0; j < ss.size(); j++) if(ss[j] == '0') zero++; else one++;
            if(s[i].size() % 2) k++; else kk++;
        }
        if(k == kk || !kk) cout << n << endl; elif(k && kk) cout << n << endl;
        elif(!k && zero % 2 && one % 2) cout << n-1 << endl; elif(!kk && zero % 2 == 0) cout << n << endl;
        elif(!kk && zero % 2) cout << n-1 << endl; elif(!k) cout << n << endl;
    }

    return 0;
}
