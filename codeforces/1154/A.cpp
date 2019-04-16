// Problem:   Restoring Three Numbers (Codeforces 1154A)
// Link:      https://codeforces.com/contest/1154/problem/A
// Rating:    800   Tags: math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-16 19:17 UTC
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

vector <ll> a;

int main(){
    for(ll i = 0; i < 4; i++){
        ll temp; cin >> temp; a.pb(temp);
    }
    sort(a.begin(), a.end());
    return cout << a[3] - a[0] << ' ' << a[3] - a[1] << ' ' << a[3] - a[2] << endl, 0;
}
