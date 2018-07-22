// Problem:   Transformation (eolymp 388)
// Link:      https://eolymp.com/problems/388
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-22 18:45 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int a , tem = 0;

int main(){
     cin >>a;
     while(a!=1){
          if(a % 2 == 0) a/=2;
          else a++;
          tem++;
     }
     cout << tem;
     return 0;
}
