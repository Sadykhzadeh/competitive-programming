// Problem:   Rectangular or not? (eolymp 915)
// Link:      https://eolymp.com/problems/915
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-11 17:38 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;
 
int main() { 
    int a , b , c;
    cin >> a >> b >> c;
    if((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b)) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}
