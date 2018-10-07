// Problem:   Bad Substring (eolymp 1343)
// Link:      https://eolymp.com/problems/1343
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-07 20:33 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define FAST_READ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

#include <iostream>
#include <stdio.h>
#include <string.h>

ll m[46];

ll func(ll n){
  if (n == 0) return 1;
  if (n == 1) return 3;
  if (m[n] != -1) return m[n];
  else return m[n] = 3 * func(n-1) - func(n-2);
}

ll n;

int main(){
      FAST_READ
      cin >> n;
      memset(m,-1,sizeof(m));
      cout << func(n) << endl;
      return 0;
}
