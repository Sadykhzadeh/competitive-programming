// Problem:   Subsequence (eolymp 988)
// Link:      https://eolymp.com/problems/988
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-06-21 14:33 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll d[999999], a[999999];
int main(){
    ll n; cin >> n;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++){
        d[i] = 1;
        for(ll j =0; j < i; j++)
            if(a[j] < a[i])
                d[i] = max(d[i], 1 + d[j]);
    }
    ll ans = d[0];
    for(ll i = 0; i < n; i++)
        ans = max(ans, d[i]);
    cout << ans << endl;
}
