// Problem:   Express As The Sum (eolymp 8676)
// Link:      https://eolymp.com/problems/8676
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-03 23:06 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

bool solve(int n) {
    n *= 2;
    for(ll d = 2; d * d <= n; ++ d) {
        if (n % d == 0) {
            ll a = n / d - d + 1;
            if(a >= 2 && a % 2 == 0) {
                a /= 2;
                cout << n / 2 << " = " << a;
                //printf("%d = %d", n / 2, a);
                for (int i = 1; i < d; ++ i) {
                    cout << " + " << a + i;
                    //printf(" + %d", a + i);
                }
                cout << '\n';
                return true;
            }
        }
    }
    return false;
}
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        if (solve(n) == false) cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}
