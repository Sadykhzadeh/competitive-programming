// Problem:   Die Roll (Codeforces 9A)
// Link:      https://codeforces.com/contest/9/problem/A
// Rating:    800   Tags: math, probabilities
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-16 14:34 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main(){
  int a , b;
  cin >> a >> b;
  int c = 6 - max(a , b) + 1;
  switch(c){
  	case 0: cout << "0/1"; break;
  	case 1: cout << "1/6"; break;
  	case 2: cout << "1/3"; break;
  	case 3: cout << "1/2"; break;
  	case 4: cout << "2/3"; break;
  	case 5: cout << "5/6"; break;
  	case 6: cout << "1/1"; break;
  }
  return 0;
}
