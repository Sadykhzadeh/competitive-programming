// Problem:   Expression (Codeforces 479A)
// Link:      https://codeforces.com/contest/479/problem/A
// Rating:    1000   Tags: brute force, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-15 14:18 UTC
// Verdict:   Accepted

#include <iostream>
#define ll long long
using namespace std;

int main(){
  int a , b , c;
  cin >> a >> b >> c;
  int p[10] = {0,0,0,0,0,0,0,0,0,0};
  p[0] = a * b * c;
  p[1] = a + b * c;
  p[2] = a * b + c;
  p[3] =(a + b)* c;
  p[4] = a *(b + c);
  p[5] = a + b + c; int max = 0;
  for(int i = 0 ; i < 10 ; i++){if(max < p[i]) max = p[i];}
  cout << max << endl;
  return 0;
}
