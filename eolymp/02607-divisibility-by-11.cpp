// Problem:   Divisibility by 11 (eolymp 2607)
// Link:      https://eolymp.com/problems/2607
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-22 19:00 UTC
// Verdict:   Accepted

#include <iostream>

#define ll long long
#define elif else if

using namespace std;

ll a , zz = 0 , zx = 0;
bool q = false;

int main(){
     cin >> a;
     while(a){
          ll temp = a % 10;
          if(q == true){zz+=temp; q = false;}
          elif(q == false){zx+=temp; q = true;}
          a/=10;
     }
     cout << zx*zz << endl;
     return 0;
}
