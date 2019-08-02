// Problem:   Exchange of digits (eolymp 8846)
// Link:      https://eolymp.com/problems/8846
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-02 14:10 UTC
// Verdict:   Accepted

#include <iostream>
#include <vector>
#include <string>

typedef long long ll;

using namespace std;


string a;

int main(){
    cin >> a;
    for(ll i = 0; i < a.length() - 2; i++){
        cout << a[i];
    }
    cout << a[a.length() - 1] << a[a.length() - 2];
    return cout << endl, 0;
}
