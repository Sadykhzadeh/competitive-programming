// Problem:   Maximum Increase (Codeforces 702A)
// Link:      https://codeforces.com/contest/702/problem/A
// Rating:    800   Tags: dp, greedy, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-02 09:19 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n;
vector <ll> a;

int main(){
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll c; cin >> c; a.pb(c);
    }   ll ans = 0, temp = 1;
    for(ll i = 1; i < a.size(); i++){
         //   cout << a[i-1] << ' '<< a[i] << endl;
        if(a[i] > a[i-1]) temp++;
        else {ans = max(ans,temp); temp = 1;}
        //cout << temp << endl;
    }
    ans = max(ans,temp);
    cout << ans << endl;
    return 0;
}
