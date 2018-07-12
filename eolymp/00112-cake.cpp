// Problem:   Cake (eolymp 112)
// Link:      https://eolymp.com/problems/112
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-12 10:32 UTC
// Verdict:   Accepted

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
      int a , b , c;
      cin >> a >> b >> c;
      cout << fixed << setprecision(2) << (double)(1 / (1.0/a+1.0/b+1.0/c)) << endl;
      return 0;
}
