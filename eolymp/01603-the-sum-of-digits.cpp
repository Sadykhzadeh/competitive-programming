// Problem:   The sum of digits (eolymp 1603)
// Link:      https://eolymp.com/problems/1603
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-05 18:56 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define FAST_READ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

#include <iostream>
#include <cmath>

ll m[46];

int func(ll x){
  if (10 > x) return x;
  return x % 10 + func(x / 10);
}

ll n;

int main(){
      FAST_READ
      cin >> n;
      cout << func(abs(n)) << endl;
      return 0;
}
