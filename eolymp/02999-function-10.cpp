// Problem:   Function-10 (eolymp 2999)
// Link:      https://eolymp.com/problems/2999
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-07 20:15 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define FAST_READ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

#include <iostream>
#include <cmath>

int func(ll m, ll n){
  if (m == 0 || m == n) return 1;
  else return func(m - 1, n - 1) + func(m, n - 1);
}

ll a, b, ans;

int main(){
      FAST_READ
      cin >> b >> a;
      ans = func(a,b);
      cout << ans << endl;
      return 0;
}
