// Problem:   Timer (eolymp 8933)
// Link:      https://eolymp.com/problems/8933
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 08:23 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n){
        cout << n << " sek" << endl;
        n--;
    }
    return cout << "0 sek" << endl, 0;
}
