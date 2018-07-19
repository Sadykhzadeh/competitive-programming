// Problem:   Use sub-program (eolymp 913)
// Link:      https://eolymp.com/problems/913
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-19 09:58 UTC
// Verdict:   Accepted

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
     int n ;
     cin >> n;
     while(n--){
          double a , b;
          cin >> a >> b;
          cout << fixed << setprecision(4) << a+b << ' ' << a*b << endl;
     }
     return 0;
}
