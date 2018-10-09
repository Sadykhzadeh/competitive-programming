// Problem:   GCD (eolymp 137)
// Link:      https://eolymp.com/problems/137
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-09 14:04 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;
int nod(int a, int b){
    while (a != 0 && b != 0) {
        if (a > b) {
         a = a % b;
        }
        else{
         b = b % a;
        }
    }
    return a + b;
}
 
int main (){
    int a, b, c, ans;
    cin >> a >> c;
    for( int i=2; i<=a; i++ ){
        cin >> b;
        ans = nod(b, c);
        c = ans;
    }
    cout << ans << endl;
    return 0;
}
