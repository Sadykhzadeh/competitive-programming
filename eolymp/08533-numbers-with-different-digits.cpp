// Problem:   Numbers with different digits (eolymp 8533)
// Link:      https://eolymp.com/problems/8533
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 08:28 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int check(ll x){
    ll a, b, c, d;
    a = x % 10;
    b = x / 10 % 10;
    c = x / 100 % 10;
    d = x / 1000;
    if(a != b && a != c && a != d && b != c && b != d && c != d) return 1;
    else return 0;
}

int main(){
    ll a, b;
    cin >> a >> b;
    for(ll i = a; i <= b; i++){
        if(check(i)) cout << i << ' ';
    }
    return cout << endl, 0;
}
