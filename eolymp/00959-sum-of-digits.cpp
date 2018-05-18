// Problem:   Sum of digits (eolymp 959)
// Link:      https://eolymp.com/problems/959
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-18 10:30 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
                int a;
                cin >> a;
                cout << (a / 1000 % 10) + (a % 10);
                cout << endl;
                return 0;
}
