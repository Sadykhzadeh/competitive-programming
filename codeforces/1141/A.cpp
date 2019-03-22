// Problem:   Game 23 (Codeforces 1141A)
// Link:      https://codeforces.com/contest/1141/problem/A
// Rating:    1000   Tags: implementation, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-22 13:43 UTC
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

ll a, b;

ll ddod(ll x){
    ll ans = 0;
    if(x % 2 == 0) while(x % 2 == 0){x/=2; ans++;}
    if(x % 3 == 0) while(x % 3 == 0){x/=3; ans++;}
    if(x == 1) return ans;
    return -1;
}

int main(){
    cin >> a >> b;
    if(a == 1){
        cout << ddod(b) << endl;
        return 0;
    }
    elif(a == b){
        cout << 0 << endl;
        return 0;
    }
    elif(a > b || (b % a != 0)){
        cout << -1 << endl;
        return 0;
    }
    else{
        ll ans = b / a;
//        cout << ans << endl;
        cout << ddod(ans) << endl;
    }
    return 0;
}
