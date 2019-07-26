// Problem:   Digits (eolymp 2)
// Link:      https://eolymp.com/problems/2
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-07-26 16:00 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/
using namespace std;
#include <iostream>

int main(){
    ll n, i(0);
    cin >> n;
    if(!n) return cout << 1 << endl, 0;
    while(n){
        n/=10;i++;
    }
    return cout << i << endl, 0;
}
