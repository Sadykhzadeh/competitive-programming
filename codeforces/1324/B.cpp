// Problem:   Yet Another Palindrome Problem (Codeforces 1324B)
// Link:      https://codeforces.com/contest/1324/problem/B
// Rating:    1100   Tags: brute force, strings
// Language:  C++17 (GCC 7-32)
// Submitted: 2020-03-15 11:55 UTC
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
        for(ll i = 0; i < n - 1; i++){
            for(ll j = i + 1; j < n; j++){
                if(a[i] == a[j] && abs(i-j) >= 2){
                    h = false;
                    cout << "YES" << endl;
                    break;
                }
            }
            if(!h) break;
        }
        if(h) cout <<"NO\n";
    } 
    return 0;
}
