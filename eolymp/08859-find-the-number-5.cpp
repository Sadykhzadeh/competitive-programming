// Problem:   Find the number 5 (eolymp 8859)
// Link:      https://eolymp.com/problems/8859
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-30 21:10 UTC
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
    ll n;
    cin >> n;
    cout << n / 10 % 10 << n / 100 % 10 << n % 10 << endl;
}
