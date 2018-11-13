// Problem:   All digits are even (eolymp 8628)
// Link:      https://eolymp.com/problems/8628
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-13 11:49 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    bool r = false;
    cin >> n;
    while(n){
        if(n % 2 == 0){r = true;}
        else{r = false; break;} 
        n /= 10;
    }
    if(r) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
