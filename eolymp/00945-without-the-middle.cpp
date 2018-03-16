// Problem:   Without the middle (eolymp 945)
// Link:      https://eolymp.com/problems/945
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-16 09:55 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n , b , a[2];
    cin >> b;
    a[0] = b/100;
    a[1] = b / 10 % 10;
    a[2] = b % 10;
    int nn = a[0]*10 + a[2];
    cout << nn << endl;
    return 0;
}
