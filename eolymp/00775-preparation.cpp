// Problem:   Preparation (eolymp 775)
// Link:      https://eolymp.com/problems/775
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-29 17:13 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll k, m, n;
vector <ll> a;

int main(){
    cin >> k >> m >> n;
    m *= n;// cout << m << endl;
    for(ll i = 0; i < k; i++){
        cin >> n; a.pb(n);
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    //for(ll i = 0 ; i < k; i++) cout << a[i] << ' ';
    ll ans = 0, i = 0;
    while(ans < m){
       // cout << "ans = " << ans << endl;
        ans += a[i]; i++;
       // cout << "a[i] =" << a[i-1] << endl;

    }
    cout << i << endl;
    return 0;
}
