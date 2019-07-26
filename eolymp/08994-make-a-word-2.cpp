// Problem:   Make a word 2 (eolymp 8994)
// Link:      https://eolymp.com/problems/8994
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-07-26 11:19 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/
using namespace std;
#include <bits/stdc++.h>

ll let[30] = {0};

int main(){
    string a, b;
    cin >> a >> b;
    if(a == b) return cout << "Ok" << endl, 0;
    for(ll i = 0; i < a.length(); i++){
        let[(int)a[i] - 96]++;
    }
    for(ll i = 0; i < b.length(); i++){
        if(let[(int)b[i] - 96] == 0) return cout << "No" << endl, 0;
    }
    return cout << "Ok" << endl, 0;
}
