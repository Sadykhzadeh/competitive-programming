// Problem:   How many times to repeat? (eolymp 20)
// Link:      https://eolymp.com/problems/20
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2023-03-26 15:21 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
using namespace std;
int n,a,b;
int main(){
    cin >> n;
    while (n > 0){
        a=n;
        while (a > 0)
        {
            n = n -(a % 10);
            a /= 10;
        }
    b++;
    }
    cout << b;
}
