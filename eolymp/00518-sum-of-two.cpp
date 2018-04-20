// Problem:   Sum of two (eolymp 518)
// Link:      https://eolymp.com/problems/518
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-20 19:05 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long  a , b  , n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
      cin >> a >> b;
      cout << a + b << endl;
    }
    return 0;
}
