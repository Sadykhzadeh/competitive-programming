// Problem:   Shooting (Codeforces 1216B)
// Link:      https://codeforces.com/contest/1216/problem/B
// Rating:    900   Tags: greedy, implementation, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-24 08:48 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n;
vector <pair <ll, ll> > a;
#define pb push_back
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll temp; cin >> temp; a.pb({temp,i+1});
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    ll ans = 0;
    for(ll i=  0; i < a.size(); i++){
        ans += ((a[i].first)*(i)+1);
    }
    cout << ans << endl;
    for(ll i = 0; i < a.size(); i++){
        cout << a[i].second << ' ';
    }
    cout << endl;
    return 0;
}
