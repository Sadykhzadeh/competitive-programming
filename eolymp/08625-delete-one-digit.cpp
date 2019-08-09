// Problem:   Delete one digit (eolymp 8625)
// Link:      https://eolymp.com/problems/8625
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
    int a = n % 10; int b = n / 10 % 10; int c = n / 100;
    int a1 = b*10+a, a2 = c*10+a, a3=c*10+b;
    cout << max(a1,(max(a2,a3))) << endl;
    return 0;
}
