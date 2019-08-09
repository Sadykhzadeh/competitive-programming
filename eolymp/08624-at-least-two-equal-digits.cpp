// Problem:   At least two equal digits (eolymp 8624)
// Link:      https://eolymp.com/problems/8624
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-09 20:06 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = n / 10000; int b = n / 1000 % 10; int c = n / 100 % 10; int d = n / 10 % 10; int e = n % 10;
    if(
        (a == b) ||
        (a == c) ||
        (a == d) ||
        (a == e) ||
        (b == c) ||
        (b == d) ||
        (b == e) ||
        (c == d) ||
        (c == e) ||
        (d == e) 
        ) cout << "YES" << endl;
        else cout << "NO" << endl;
    return 0;
}
