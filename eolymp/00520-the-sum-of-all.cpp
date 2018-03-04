// Problem:   The sum of all (eolymp 520)
// Link:      https://eolymp.com/problems/520
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-04 20:00 UTC
// Verdict:   Accepted

#include <iostream>
 
using namespace std;
 
int main() {
    long x;
    long sum = 0;
    while (cin >> x){
        sum+= x;
    }
    cout << sum;
    return 0;
}
