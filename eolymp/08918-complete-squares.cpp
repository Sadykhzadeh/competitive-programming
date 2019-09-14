// Problem:   Complete squares (eolymp 8918)
// Link:      https://eolymp.com/problems/8918
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 08:22 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
            cout << i*i << ' ';
    }
    return cout << endl, 0;
}
