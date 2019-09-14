// Problem:   Greatest divisor (eolymp 8928)
// Link:      https://eolymp.com/problems/8928
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 08:25 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){ return cout << n/i << endl, 0;}
    }
    cout << 1 << endl;
}
