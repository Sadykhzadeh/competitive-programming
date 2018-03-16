// Problem:   Difference (eolymp 941)
// Link:      https://eolymp.com/problems/941
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-16 08:57 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a , b, c , n;
    cin >> n;
    if( n < 0 ) n = abs(n);
    a = n % 10;
    b = n / 10 % 10;
    c = n /100 % 10;
    int res = a*b*c - a - b -c;
     cout << res ;
    return 0; 
}
