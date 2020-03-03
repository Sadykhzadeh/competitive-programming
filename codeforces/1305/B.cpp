// Problem:   Kuroni and Simple Strings (Codeforces 1305B)
// Link:      https://codeforces.com/contest/1305/problem/B
// Rating:    1200   Tags: constructive algorithms, greedy, strings, two pointers
// Language:  C++17 (GCC 7-32)
// Submitted: 2020-03-03 15:29 UTC
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
#define F first
#define S second
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
cerr << "Автор: Азер Садыхзаде\n";}
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
    string s;
    cin >> s;
    vector<int> ans;
    int lasti = 0;
    for(int i = lasti; i < s.length(); i++){
        if(s[i] != '(') continue;
        for(int j = s.length(); j > i; j--){
            if(s[j]==')'){
                ans.pb(i+1);
                ans.pb(j+1);
                s[i] = s[j] = '*';
                //i = j;
                break;
            }
        }
    }
    sort(ans.begin(), ans.end());
    if(!ans.size()) return cout << 0 << endl, 0;
    cout << 1 << endl <<ans.size() << endl;
    for(auto i: ans) cout << i <<" ";
    cout << endl;
    timer();
    stop;
}
