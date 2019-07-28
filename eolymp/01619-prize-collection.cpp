// Problem:   Prize Collection (eolymp 1619)
// Link:      https://eolymp.com/problems/1619
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-07-28 12:34 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <cmath>

ll n, a[1000064], ans[1000064];

int main(){
    cin >> n;
    for(ll i = 1 ; i <= n; i++) cin >> a[i];
    ans[1] = a[1];
    if(n > 1) ans[2] = max(a[1], a[2]);
    for(ll i = 3; i <= n; i++){
        ans[i] = max(ans[i-2] + a[i], ans[i-1]);
    }
    cout << ans[n] << endl;
    return 0;
}
