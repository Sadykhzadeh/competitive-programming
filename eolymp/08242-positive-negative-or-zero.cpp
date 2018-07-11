// Problem:   Positive, negative or zero (eolymp 8242)
// Link:      https://eolymp.com/problems/8242
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-11 17:22 UTC
// Verdict:   Accepted

#include <iostream>
#include<string.h>
#include<stdlib.h>

#define elif else if

using namespace std;

int main(){
    int x,y;
    cin >> x;
    if(x > 0) cout << "Positive";
    elif(x==0) cout << "Zero";
    else cout << "Negative";
    return 0;
}
