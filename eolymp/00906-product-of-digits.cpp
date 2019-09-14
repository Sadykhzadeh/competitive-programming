// Problem:   Product of digits (eolymp 906)
// Link:      https://eolymp.com/problems/906
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 08:06 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a , b, c , n;
    cin >> n;
    a = n % 10;
    b = n / 10 % 10;
    c = n /100 % 10;
    cout << a*b*c;
    return 0;
}
