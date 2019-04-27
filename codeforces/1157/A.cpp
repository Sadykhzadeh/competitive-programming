// Problem:   Reachable Numbers (Codeforces 1157A)
// Link:      https://codeforces.com/contest/1157/problem/A
// Rating:    1100   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-27 17:29 UTC
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

ll n, ans(1), lol[20];

int main(){
    cin >> n; ans = 1;
    while(true){
        if(n < 10) lol[n] = 1;
        n++;
        while(n % 10 == 0) n /= 10;
        if(n >= 10 || !lol[n]) ans++;
        else break;
    }
    return cout << ans << endl, 0;
}
