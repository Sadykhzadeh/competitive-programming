// Problem:   Turn the Rectangles (Codeforces 1008B)
// Link:      https://codeforces.com/contest/1008/problem/B
// Rating:    1000   Tags: greedy, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-04 11:42 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq2(x,y) cout << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
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

#include <bits/stdc++.h>

using namespace std;

vector < pair <ll, ll> >a;
ll n;

int main(){
    F_READ;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll q, w;
        cin >> q >> w;
        a.pb({q,w});
    }
    ll temp = max(a[0].first, a[0].second);
    for(ll i = 1; i < n; i++){
        ll z(a[i].first);
        ll b(a[i].second);
        if(temp >= z && temp >= b) temp = max(z,b);
        elif(temp >= z) temp = z;
        elif(temp >= b) temp = b;
        else return cout << "NO" << endl, 0;
    }
    cout << "YES" << endl;
    return 0;
}
