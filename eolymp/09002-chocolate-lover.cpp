// Problem:   Chocolate lover (eolymp 9002)
// Link:      https://eolymp.com/problems/9002
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-05-13 09:40 UTC
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
    ll a, b, c;
    cin >> a >> b >> c;
    if(a % 2 == 0) return cout << (a/2) * (c + b) << endl, 0;
    else return cout << max(c,b)*(a/2+1) + min(b,c)*(a/2) << endl, 0;
    return 0;
}
