// Problem:   Simple problem (eolymp 1)
// Link:      https://eolymp.com/problems/1
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-04 12:23 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a; // a = 23;
    int a1, a2;
    a1 = a / 10; // a1 = 23 : 10 = 2
    a2 = a % 10; // a2 23 % 10 = 3
    cout << a1 << ' ' << a2 << endl;
}
