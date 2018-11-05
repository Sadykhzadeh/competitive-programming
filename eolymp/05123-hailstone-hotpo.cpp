// Problem:   Hailstone HOTPO (eolymp 5123)
// Link:      https://eolymp.com/problems/5123
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-05 19:30 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if 
#define pb push_back

using namespace std;

#include <iostream>

ll t, m, n;

int function(ll n){
    if(n % 2) return 3 * n + 1;
    else return n / 2;
}

int main(){
    cin >> t;
    for(ll i = 0; i < t; i++){
        cin >> n >> m;
        ll k = 1;
        while(m > 1){
            if(m > k) k = m;
            m = function(m);
        }
        cout << n << ' ' << k << '\n';
    }
    return 0;
}
