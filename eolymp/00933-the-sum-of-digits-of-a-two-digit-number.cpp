// Problem:   The sum of digits of a two-digit number (eolymp 933)
// Link:      https://eolymp.com/problems/933
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-23 07:52 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << abs(n % 10 + n / 10) << endl;
    return 0;
}
