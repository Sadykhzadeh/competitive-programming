// Problem:   CodeForces 525B
// Link:      https://codeforces.com/problemset/problem/525/B
// Language:  GNU G++14 6.4.0
// Submitted: 2019-06-16 22:11 UTC
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
#define rus_lang setlocale(LC_ALL , "Russian")
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

int main(){
    string s;ll n;
    cin >> s >> n;
    vector < pair <ll, bool > >a;
    for(ll i = 0; i < n; i++){
        ll temp; cin >> temp;
        a.pb({temp-1, true});
    }
    sort(a.begin(), a.end());
    if(a.size() >= 2)
    for(ll i = 1; i < n; i++){
        if(a[i].first == a[i-1].first && a[i].second && a[i-1].second){
            a[i].second = a[i-1].second = false;
        }
    }
    for(ll i = 0; i < n; i++){

        if(a[i].second == true){
            for(ll j = a[i].first; j < s.length()/2; j++){
                //qq2(s[j], s[s.length() - j - 1]);
                swap(s[j], s[s.length() - j - 1]);
            }
        }
    }
    cout << s << endl;
}
