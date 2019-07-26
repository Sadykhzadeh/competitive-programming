// Problem:   Characters doubling (eolymp 8991)
// Link:      https://eolymp.com/problems/8991
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-07-26 11:18 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/
using namespace std;
#include <bits/stdc++.h>

string s;

int main(){
    getline(cin, s);
    ll n = s.length(); //s[n] = '1';
    for(ll i = 0; i <n; i++){
        cout << s[i] << s[i];
    }
    return cout << endl, 0;
}
