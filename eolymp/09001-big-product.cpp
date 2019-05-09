// Problem:   Big product (eolymp 9001)
// Link:      https://eolymp.com/problems/9001
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-05-09 16:09 UTC
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
    ll a, b;
    cin >> a >> b;
    if(a == b){
        return cout << a / abs(a) << endl, 0;
    }
    if(b >= 0 && a <= 0){
        return cout << 0 << endl, 0;
    }
    if(a > 0 && b > 0){
        return cout << 1 << endl, 0;
    }
    if(((abs(a) - abs(b) + 1) % 2)) return cout << -1 << endl, 0;
    return cout << 1 << endl, 0;
    return 0;
}
