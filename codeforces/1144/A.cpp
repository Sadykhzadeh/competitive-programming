// Problem:   Diverse Strings (Codeforces 1144A)
// Link:      https://codeforces.com/contest/1144/problem/A
// Rating:    800   Tags: implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-10-16 10:07 UTC
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

int main(){
    F_READ;
    ll n;
    cin >> n;
    while(n--){
        string s;
        set <ll> a;
        cin >> s;
        if(s.length() == 1){
            cout << "YES" << endl;
            continue;
        }
        for(ll i = 0; i < s.length(); i++){
            a.ins(s[i]);
        }
        vector <ll> ans;
        for(set <ll> :: iterator it = a.begin() ; it != a.end(); it++){
            ans.pb(*it);
        }
        if(ans.size() != s.length()){cout << "NO" << endl; continue;}
        bool g = false;
        for(ll i = 1; i < ans.size(); i++){
            if(ans[i] - ans[i-1] != 1){g = false;break;} else{g = true;}
        }
        if(g) cout << "YES"; else cout << "NO";
        cout << endl;
    }
    timer();
    stop;
}
