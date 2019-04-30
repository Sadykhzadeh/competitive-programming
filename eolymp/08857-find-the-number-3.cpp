// Problem:   Find the number 3 (eolymp 8857)
// Link:      https://eolymp.com/problems/8857
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-30 21:03 UTC
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

int main(){
    ll a;
    cin >> a;
    cout << a / 100 << a % 10 << a / 10 % 10 << endl;
}
