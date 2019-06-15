// Problem:   CodeForces 4B
// Link:      https://codeforces.com/problemset/problem/4/B
// Language:  GNU G++14 6.4.0
// Submitted: 2019-06-15 11:29 UTC
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
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define COUT(x) return cout << x << endl, 0;
#define stop return 0

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;

#include <bits/stdc++.h>
#define endl "\n"

ll d, sum;
vector < pair <ll, ll> > a;

int main(){
    F_READ;
    cin >> d >> sum; ll sum1, sum2; sum1 = sum2 = 0;
    for(ll i = 0; i < d; i++){
        ll s,x;
        cin >> s >> x;
        a.pb({s,x}); sum1 += a[i].first; sum2 += a[i].second;
    }
    if(sum1 > sum || sum2 < sum) COUT("NO");
    if(sum1 == sum){
        cout << "YES" << endl;
        for(ll i = 0; i < d; i++) cout << a[i].first << ' '; return cout << endl, 0;
    }
    for(ll i = 0; i < d; i++){
        while(a[i].first < a[i].second && sum != sum1){
            sum1++; a[i].first++;
        }
        if(sum == sum1) break;
    }
    if(sum == sum1){
        cout << "YES" << endl;
        for(ll i = 0; i < d; i++) cout << a[i].first << ' '; return cout << endl, 0;
    }
    else COUT("NO");
}
