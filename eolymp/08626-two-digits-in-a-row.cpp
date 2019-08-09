// Problem:   Two digits in a row (eolymp 8626)
// Link:      https://eolymp.com/problems/8626
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
    while(n >= 10){
        if(n % 10 == 7 && n / 10 % 10 == 3){cout << "YES" << endl; return 0;}
        else n /= 10;
    }
    cout << "NO" << endl;
    return 0;
}
