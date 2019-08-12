// Problem:   All odd (eolymp 8915)
// Link:      https://eolymp.com/problems/8915
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-12 12:29 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll i(1), n;
    cin >> n;
    while(i < n){
        cout << i << ' ';
        i+=2;
    }
}
