// Problem:   Dino and snow buildings (eolymp 9637)
// Link:      https://eolymp.com/problems/9637
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2020-03-09 08:41 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    for(ll i = 0; i < abs(b - a); i++) ans += i;
   //     cerr << ans << endl;
    cout << abs(ans - a) << endl;
    return 0;
}
