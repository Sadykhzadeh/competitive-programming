// Problem:   The number in reverse order (eolymp 1607)
// Link:      https://eolymp.com/problems/1607
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-07-26 13:27 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/
using namespace std;
#include <iostream>
#include <algorithm>

int main(){
    string n; cin >> n;
    reverse(n.begin(), n.end());
    return cout << n << endl, 0;
}
