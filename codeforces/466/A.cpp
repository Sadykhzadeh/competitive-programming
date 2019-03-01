// Problem:   Cheap Travel (Codeforces 466A)
// Link:      https://codeforces.com/contest/466/problem/A
// Rating:    1200   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-01 20:05 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n, m, a, b, ans(0), ans1(0), ans2(0);

int main(){
    cin >> n >> m >> a >> b;
    ll n1, n2; n1 = n2 = n;
    if(n1 / m >= 1){
        ans += (n1/m) * b;
        n1 %= m;
    }
    if(n1 > 0) ans += n1 * a;
    ans1 = n/m*b + b;
    ans2 = n2 * a;
  //  cout << ans << " " << ans1 << " " << ans2 << endl;
    cout << min(min(ans,ans1),ans2) << endl;
    return 0;
}
