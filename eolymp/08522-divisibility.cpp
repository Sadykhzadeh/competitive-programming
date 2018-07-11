// Problem:   Divisibility (eolymp 8522)
// Link:      https://eolymp.com/problems/8522
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-11 17:21 UTC
// Verdict:   Accepted

#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    if(x % y != 0) cout << x/y << ' ' << x%y;
    else cout << "Divisible";
    return 0;
}
