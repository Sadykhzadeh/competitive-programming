// Problem:   Weighing (eolymp 1993)
// Link:      https://eolymp.com/problems/1993
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-11 19:17 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main() {
   long long d , ans = 0;
   cin>>d;
   while(d>1){ 
   	  d = (d+2)/3;
      ans++;
   }
   cout<<ans<<endl;
   return 0;
}
