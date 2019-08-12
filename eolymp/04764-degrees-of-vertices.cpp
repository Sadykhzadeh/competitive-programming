// Problem:   Degrees of vertices (eolymp 4764)
// Link:      https://eolymp.com/problems/4764
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-12 18:08 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll n, a;

int main(){
    cin >> n;
    for(ll i = 0 ; i < n ; i++){
        ll cnt(0);
        for(ll j = 0; j < n; j++){
            cin >> a;
            if(a) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
