// Problem:   Street numbers (eolymp 6278)
// Link:      https://eolymp.com/problems/6278
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-11 17:27 UTC
// Verdict:   Accepted

#include <iostream>
#include<string.h>
#include<stdlib.h>

#define elif else if

using namespace std;

int main(){
    int a , b;
    cin >> a;
    cin >> b;
    if(a % 2 == b % 2) cout << 1;
    else cout << 0;
    return 0;
}
