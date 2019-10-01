// Problem:   Calendar (eolymp 1955)
// Link:      https://eolymp.com/problems/1955
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-10-01 18:21 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;
int main() {
    int d1, m1, y1;
    int d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    int yash = y2 - y1;
    if(m2 < m1 || (m1 == m2 && d2 < d1)) yash--;
    return cout << yash << endl, 0;
}
