// Problem:   Valera and Antique Items (Codeforces 441A)
// Link:      https://codeforces.com/contest/441/problem/A
// Rating:    1000   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-10 09:39 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007

using namespace std;

#include <bits/stdc++.h>

ll n, v;
vector <ll> ans;

int main(){
    cin >> n >> v;
    for(ll i = 1; i <= n; i++){
        ll temp;
        cin >> temp;
        vector <ll> a;
        for(ll pp = 0; pp < temp; pp++){
            ll pop; cin >> pop;
            a.pb(pop);
        }
        sort(a.begin(),a.end());
        if(v > a[0]) ans.pb(i);
    }
    cout << ans.size() << endl;
    for(ll i = 0; i < ans.size(); i++){
        cout << ans[i] << ' ';
    }
    return cout << endl, 0;
}
