// Problem:   From Hero to Zero (Codeforces 1175A)
// Link:      https://codeforces.com/contest/1175/problem/A
// Rating:    900   Tags: implementation, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-07 21:02 UTC
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

//https://codeforces.com/contest/1175/problem/A

int main(){
    ll t; cin >> t; while(t--){
        ll n, k; ll cnt = 0;
        cin >> n >> k;
        while(n){
                //cout << n % k << endl;
                if(n % k){ll pop = (n%k); n -= pop; cnt+=(pop);}
                while(n % k == 0 && n >= 1){n/=k; cnt++;}
        }
        cout << cnt << endl;
        }
    return 0;
}
