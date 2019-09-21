// Problem:   Digits (eolymp 2)
// Link:      https://eolymp.com/problems/2
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-21 16:50 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
    int a, cavab = 0;
    cin >> a;
    if(a == 0){
         cout << 1 << endl;
         return 0;
    }
    while(a != 0){
        a = a / 10;
        cavab++; // cavab = cavab + 1;
    }
    cout << cavab << endl;
}
