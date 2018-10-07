// Problem:   Digits (eolymp 2)
// Link:      https://eolymp.com/problems/2
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-07 19:14 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main()
{
    int a , b , i;
    cin >> a;
    b=a;
    i = 0;
    while(a){
             i++; a=a/10;
    }
    if(b==0) i=1; else i=i;
    cout << i << endl;
    return 0;
}
