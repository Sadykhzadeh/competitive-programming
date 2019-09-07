// Problem:   New Sergey's game (eolymp 4720)
// Link:      https://eolymp.com/problems/4720
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-07 12:17 UTC
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
void timer(){ll T2(clock());cerr<<"Time: "<<(T2-T1)/1000.<<" seconds"<<endl;}
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

int main(){
    ll x1, y1, x2, y2, x3, y3, x4, y4, x0, y0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x0 >> y0;
    if(
       (x3 < x0)  &&
       (x0 < x4)  &&
       (y4 < y0)  &&
       (y0 < y3)
       )                puts("SAD");
    elif(
         (x1 <= x0)
         && (x0 <= x2) &&
         (y2 <= y0) &&
         (y0 <= y1
          )

         )                                  puts("HAPPY");
else cout << "SAD";
    timer();
    stop;
}
