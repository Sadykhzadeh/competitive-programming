// Problem:   Yet Another Tetris Problem (Codeforces 1324A)
// Link:      https://codeforces.com/contest/1324/problem/A
// Rating:    900   Tags: implementation, number theory
// Language:  C++17 (GCC 7-32)
// Submitted: 2020-03-15 11:41 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define elif else if

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector <ll> a;
        for(ll i = 0; i < n; i++){
            ll temp; cin >> temp; a.pb(temp);
        }
        bool h = true;
        for(ll i = 1; i < n; i++){
            if(a[i-1] % 2 != a[i] % 2){h = false; cout << "NO" << endl; break;}
        }
        if(h)cout << "YES" << endl;
    }
    return 0;
}
