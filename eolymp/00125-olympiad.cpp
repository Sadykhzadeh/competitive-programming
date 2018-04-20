// Problem:   Olympiad (eolymp 125)
// Link:      https://eolymp.com/problems/125
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-20 18:57 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int h2, m2, s2,h1, m1, s1 ;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    if (s2 < s1) {
         s2 += 60;
         m2 -= 1;
    }
    if (m2 < m1) {
         m2 += 60;
         h2 -= 1;
    }
    cout << h2 - h1 << " ";
    cout << m2 - m1 << " ";
    cout << s2 - s1;
    cout << endl;
    return 0;
}
