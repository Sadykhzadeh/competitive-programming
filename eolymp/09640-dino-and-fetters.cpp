// Problem:   Dino and fetters (eolymp 9640)
// Link:      https://eolymp.com/problems/9640
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2020-03-09 08:59 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

vector < pair <ll, ll> > a;

bool f(pair <ll, ll> a, pair <ll, ll> b){
    return a.first - a.second < b.first - b.second;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n, k;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll q, w;
        cin >> q >> w;
        a.pb({q,w});
        cin >> q >> w;
        a.pb({q,w});
    }
    sort(a.begin(), a.end(), f);
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        ans += a[i].second;
    }
    for(ll i = n; i < n + n; i++){
        ans += a[i].first;
    }
    cout << ans << endl;
    return 0;
}
