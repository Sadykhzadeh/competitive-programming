// Problem:   GCD of two numbers (eolymp 1601)
// Link:      https://eolymp.com/problems/1601
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-20 07:21 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a , b;
  cin >> a >> b;
  while(a != 0 && b!= 0){
    if(a > b){
      a = a % b;
    }
    else {
      b = b % a;
    }
  }
  cout << a+b;
  cout << endl;
  }
