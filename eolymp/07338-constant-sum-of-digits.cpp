// Problem:   Constant sum of digits (eolymp 7338)
// Link:      https://eolymp.com/problems/7338
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-10 10:03 UTC
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

ll n, ans(0);

ll sum(ll n){
    if(n < 100) return n / 10 + n % 10;
    else return n / 100 + n / 10 % 10 + n % 10;
}

int main(){
    F_READ;
    cin >> n;
    for(ll i = 10; i <= 99; i++){
        ll temp = sum(i);
        ll pop = i * n;
        ll temp1 = sum(pop);
        if(temp == temp1){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
