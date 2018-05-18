// Problem:   Hockey Tournament Medals (eolymp 1326)
// Link:      https://eolymp.com/problems/1326
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-18 20:19 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
        int n;
        cin >> n;
        if(n == 1) cout << 1 << endl;
        else if(n == 2) cout << 2 << endl;
        else cout << n * (n - 1) * ( n - 2) << endl;
        return 0;
}
