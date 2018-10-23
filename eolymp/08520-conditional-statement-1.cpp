// Problem:   Conditional statement - 1 (eolymp 8520)
// Link:      https://eolymp.com/problems/8520
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-23 13:02 UTC
// Verdict:   Accepted

#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    if(x >= 5) cout << x+7;
    else cout << x*x-3*x+4;
    cout << endl;
    return 0;
}
