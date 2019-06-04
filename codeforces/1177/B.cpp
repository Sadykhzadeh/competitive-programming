// Problem:   Digits Sequence (Hard Edition) (Codeforces 1177B)
// Link:      https://codeforces.com/contest/1177/problem/B
// Rating:    1800   Tags: binary search, divide and conquer, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-04 13:21 UTC
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

ll n, t, p, ans;

int main(){
    F_READ;
    ll k[13]({0,9,189,2889,38889,488889,5888889,
             68888889,788888889,8888888889,
             98888888889,1088888888889}),
     num[13]({1,10,100,1000,10000,100000,
             1000000,10000000,100000000,1000000000,
             10000000000,100000000000,1000000000000});
    cin >> n;
    ll i(0);
    while(k[i++] <= n);
    i--;
    p = (i - (n - k[i-1]) % i) % i + 1;
    t = ((n - k[i-1]) / i) + num[i-1];
    if(p == 1) t--;
    while(p--){
        ans = t % 10;   t /= 10;
    }
    return cout << ans << endl, 0;
}
