// Problem:   Oddities (eolymp 6199)
// Link:      https://eolymp.com/problems/6199
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 08:35 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
int main(){
    ll n; cin >> n;
    while(n--){
        ll a; 
        cin >> a;
        if(abs(a) % 2 == 1) cout << a << " is odd" << endl;
        else cout << a << " is even" << endl;
    }
}
