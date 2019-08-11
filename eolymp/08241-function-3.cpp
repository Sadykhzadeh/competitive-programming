// Problem:   Function - 3 (eolymp 8241)
// Link:      https://eolymp.com/problems/8241
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-11 19:15 UTC
// Verdict:   Accepted

typedef long double ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <cmath>
#include <iomanip>

ll a, b;

int main(){
      while(cin >> a >> b){
            ll k = a*a + sin(a*b) - b*b;
            cout << fixed << setprecision(4) << k << endl;
      }
      return 0;
}
