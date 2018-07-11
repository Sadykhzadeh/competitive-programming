// Problem:   Even or Odd (eolymp 8371)
// Link:      https://eolymp.com/problems/8371
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-11 17:14 UTC
// Verdict:   Accepted

#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a%2!=0) cout << "ODD";
    else cout << "EVEN";
    return 0;
}
