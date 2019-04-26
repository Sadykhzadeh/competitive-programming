// Problem:   Long Number (Codeforces 1157B)
// Link:      https://codeforces.com/contest/1157/problem/B
// Rating:    1300   Tags: greedy
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-26 16:06 UTC
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

ll ar[11]; bool flag = false;
ll n; string a;

int main(){
    cin >> n >> a;
    for(ll i = 1; i <= 9; i++){
        cin >> ar[i];
    }
    for(ll i = 0; i < n; i++){
        if(a[i] - '0' < ar[a[i] - '0']
           ||
           (flag &&
            a[i] - '0' == ar[a[i] - '0']
            )
           )
            a[i] = ar[a[i] - '0'] + '0', flag = true;
            elif(flag) break;
    }
    cout << a << endl;
    return 0;
}
