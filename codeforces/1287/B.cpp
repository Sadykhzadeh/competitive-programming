// Problem:   Hyperset (Codeforces 1287B)
// Link:      https://codeforces.com/contest/1287/problem/B
// Rating:    1500   Tags: brute force, data structures, implementation
// Language:  C++17 (GCC 7-32)
// Submitted: 2020-01-05 14:39 UTC
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
#define eb emplace_back
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

#include <bits/stdc++.h>
using namespace std;

unordered_map<string,ll> mapp;
vector<string> v;
int main(){
    F_READ;
    ll n,k;
    cin >> n >> k;
    for(ll i = 1; i <= n; i++){
        string temp; cin >> temp;
        v.pb(temp);
        mapp[temp]++;
    }
    ll ans = 0;
    for(ll i = 1; i <= n; i++){
        mapp[v[i-1]]--;
        for(ll j = i + 1; j <= n; j++){
            mapp[v[j-1]]--;
            string s1;
            for(ll l = 0; l < k; l++){
                if(v[i-1][l]!=v[j-1][l]){
                    if(v[i-1][l] != 'S' && v[j-1][l] != 'S') s1 += 'S';
                    else if(v[i-1][l] != 'E' && v[j-1][l] != 'E') s1 +='E';
                    else s1 += 'T';
                }
                else s1 += v[i-1][l];
            }
            ans += mapp[s1];
        }
        for(ll j = i + 1; j <= n; j++) mapp[v[j-1]]++;
    }
    cout << ans << endl;
    return  0;
}
