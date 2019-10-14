// Problem:   Rooms and Staircases (Codeforces 1244B)
// Link:      https://codeforces.com/contest/1244/problem/B
// Rating:    1000   Tags: brute force, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-10-14 06:19 UTC
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

ll t, n;

int main(){
    F_READ;
    cin >> t;
    while(t--){
        cin >> n;
        string s;
        cin >> s;
        if(s == "1"){cout << 2 << endl; continue;
        }
        if(s == "0"){cout << 1 << endl; continue;
        }
        if(s[0] == '1' || s[n-1] == '1'){
            cout << n * 2 << endl;
            continue;
        }
        ll q = 0, w = n-1;
        while(s[q] == '0' && q != n - 1)q++;
        if(q == n - 1){
            cout << n << endl;
            continue;
        }
        while(s[w] == '0' && w != 0) w--;
        q++; w++;
        cout << 2 * max(max(q,w), max(n-q+1,n-w+1)) << endl;
    }
}
