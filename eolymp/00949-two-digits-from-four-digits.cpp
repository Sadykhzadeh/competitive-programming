// Problem:   Two digits from four digits (eolymp 949)
// Link:      https://eolymp.com/problems/949
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-16 14:24 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = n / 100 % 10;
    int b = n / 10 % 10;
    cout << a*10 + b << endl;
    return 0;
}
