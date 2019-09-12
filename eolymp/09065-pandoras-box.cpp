// Problem:   Pandora's Box (eolymp 9065)
// Link:      https://eolymp.com/problems/9065
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-12 13:41 UTC
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
void timer(){rus_lang; ll T2(clock());cerr<<"Время: "<<(T2-T1)/1000.<<" секунд."<<endl;
cerr << "Автор: Азер Садыхзаде";}
//#include <ext/pb_ds/detail/standard_policies.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <functional>
#define endl "\n"
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS

#define MAX_VALUE 1e6 + 10

ll n;

int main(){
    F_READ;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<ll> dp(n, 989898989898), p(n, -1), mindp(MAX_VALUE, 989898989898), minindex(MAX_VALUE, 989898989898);
    dp[0] = mindp[a[0]] = minindex[a[0]] = 0;
    for(ll i = 1; i < n; i++) {
        if (a[i - 1] <= a[i]) {
            dp[i] = dp[i - 1];
            p[i] = i - 1;
        }
        if(mindp[a[i]] != 989898989898 && dp[i] > mindp[a[i]] + 1) {
            dp[i] = mindp[a[i]] + 1;
            p[i] = minindex[a[i]];
        }
        if(dp[i] < mindp[a[i]]) {
            mindp[a[i]] = dp[i];
            minindex[a[i]] = i;
        }
    }
    if(dp[n - 1] == 989898989898) COUT(-1);
    cout << dp[n-1] << endl;
    vector< pair<ll, ll> > answer;
    ll c = n - 1;
    while(c != -1){
        ll temp = p[c];
        if (temp != c - 1) {
            answer.push_back({temp, c});
        }
        c = temp;
    }
    reverse(answer.begin(), answer.end());
    for(ll i = 0; i < answer.size(); i++) {
        cout << answer[i].first + 1 << ' ' << answer[i].second + 1 << endl;
    }
    timer();
    stop;
}
