// Problem:   Fibonacci (eolymp 4730)
// Link:      https://eolymp.com/problems/4730
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-05 18:58 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define MAX 46

using namespace std;

#include <iostream>
#include <vector>
#include <cstring>

ll n, fib[MAX];

int f(ll n){
  if (n <= 1) return 1;
  if (fib[n] != -1) return fib[n];
  return fib[n] = f(n-1) + f(n - 2);
}

int main(){
  cin >> n;
  memset(fib,-1,sizeof(fib));
  cout << f(n) << endl;
  return 0;
}
