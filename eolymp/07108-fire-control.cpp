// Problem:   Fire control (eolymp 7108)
// Link:      https://eolymp.com/problems/7108
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-02 13:28 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    for(ll i = 0; i < s.length(); i++){
        for(ll j = 0; j < s[i] - 47; j++){
            cout << s[i];
        }
    }
    return 0;
}
