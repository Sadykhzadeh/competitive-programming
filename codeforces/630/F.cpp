// Problem:   Selection of Personnel (Codeforces 630F)
// Link:      https://codeforces.com/contest/630/problem/F
// Rating:    1300   Tags: combinatorics, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-27 19:58 UTC
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

ll f(ll x, ll y){
    if(!y) return 1;
    return (x * f(x - 1, y - 1)) / y;
}

ll n;

int main(){
    cin >> n;
    cout << f(n,5) + f(n,6) + f(n,7) << endl;
    return 0;
}
