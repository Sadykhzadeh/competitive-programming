// Problem:   Neko Finds Grapes (Codeforces 1152A)
// Link:      https://codeforces.com/contest/1152/problem/A
// Rating:    800   Tags: greedy, implementation, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-05-04 09:03 UTC
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

#include <bits/stdc++.h>

using namespace std;

int main(){
    F_READ;
    ll m, n;
    cin >> n >> m;
    ll a;
    ll z, z1, x, x1;
    z = z1 = x = x1 = 0;
    while(n--){
        cin >> a;
        if(a % 2 == 0) z++;
        else z1++;
    }
    while(m--){
        cin >> a;
        if(a % 2 == 0) x++;
        else x1++;
    }
    //qq(z); qq(z1); qq(x); qq(x1);
    return cout << min(z, x1) + min(x, z1) << endl, 0;
}
