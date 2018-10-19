// Problem:   Number of pendant vertices 1 (eolymp 5080)
// Link:      https://eolymp.com/problems/5080
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-19 16:59 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll n, a, ans = 0;
bool flag = true;

int main(){
    cin >> n;
    for(ll i = 0 ; i < n ; i++){
        ll cnt(0);
        for(ll j = 0; j < n; j++){
            cin >> a;
            if(a) cnt++;
        }
        if(cnt == 1) ans++;
    }
    if(flag) cout << ans; else cout << 0; cout << endl;
    return 0;
}
