// Problem:   Discounts (Codeforces 1132B)
// Link:      https://codeforces.com/contest/1132/problem/B
// Rating:    900   Tags: greedy, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-19 09:39 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007

using namespace std;

#include <bits/stdc++.h>

ll n, m;
vector <ll> a;
vector <ll> q;

int main(){
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll temp; cin >> temp; a.pb(temp);
    }
    cin >> m;
    for(ll i = 0; i < m; i++){
        ll temp; cin >> temp; q.pb(temp);
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for(ll i = 0; i < a.size(); i++){
        ans += a[i];
    }
    for(ll i = 0; i < m; i++){
        cout << ans - a[a.size() - q[i]] << endl;
    }
    return 0;
}
