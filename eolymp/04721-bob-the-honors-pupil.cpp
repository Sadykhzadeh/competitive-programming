// Problem:   Bob the honors pupil (eolymp 4721)
// Link:      https://eolymp.com/problems/4721
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-27 15:54 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int a , i = 0;

int main(){
     cin >> a;
     while(a){
          int temp = a % 10;
          if(temp == 5) i++;
          a/=10;
     }
     cout << i;
     return 0;
}
