// Problem:   Without repetitions 3 (eolymp 8992)
// Link:      https://eolymp.com/problems/8992
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-07-26 11:16 UTC
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
    ll n = s.length(); s[n] = '1';
    for(ll i = 1; i <= n; i++){
        if(s[i] != s[i-1]) cout << s[i-1];
    }
    return cout << endl, 0;
}
