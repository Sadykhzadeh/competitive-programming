// Problem:   Honeycomb (eolymp 5092)
// Link:      https://eolymp.com/problems/5092
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-05 19:23 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <string.h>

ll n, fib[90];

int f(ll n){
  if(n <= 1 || n <= 3) return 1;
  if(fib[n] != -1) return fib[n];
  if(n % 2 == 1) return fib[n] = f(n - 1) + f(n - 3);
  return fib[n] = f(n - 1);
}

int main(void){
  cin >> n;
  memset(fib,-1,sizeof(fib));
  cout << f(2*n-1) << endl;
  return 0;
}
