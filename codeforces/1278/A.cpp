// Problem:   Shuffle Hashing (Codeforces 1278A)
// Link:      https://codeforces.com/contest/1278/problem/A
// Rating:    1000   Tags: brute force, implementation, strings
// Language:  C++17 (GCC 7-32)
// Submitted: 2019-12-19 16:30 UTC
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
cerr << "Автор: Азер Садыхзаде" << endl;}
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#define endl "\n"
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

int main(){
    F_READ;
	ll t;
    cin >> t;
    while(t--){
		string h,s;
        	cin>>s>>h;
        	map<char,ll>qwe;
        	ll f = 0, i(0);
        	for(i = 0; i < h.size(); i++){
            for(ll j = 0; j < s.size(); j++)     qwe[s[j]]++;
            ll cnt = 0;
            for(ll j = i; j < h.size(); j++){
                if(qwe[h[j]] >= 1){
                    qwe[h[j]]--;
                    cnt++;
                }
                else break;
            }
            qwe.clear();
            if(cnt == s.size()){
                f = 1;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
 	timer();
	stop;
}
