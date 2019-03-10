// Problem:   Dragons (Codeforces 230A)
// Link:      https://codeforces.com/contest/230/problem/A
// Rating:    1000   Tags: greedy, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-10 08:36 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n, s;
vector<pair<ll,ll> >massiv;

ll x,y;

int main(){
    cin >> s >> n;
    for(ll i = 0; i < n; i++){
        cin>>x>>y;
        massiv.pb({x,y});
    }
   sort(massiv.begin(),massiv.end());
    bool j = true;
    for(ll i = 0;i < n; i++){
        if(s > massiv[i].first) s += massiv[i].second;
        else{
            j = false;
            break;
        }
    }
    if(!j) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
