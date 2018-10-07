// Problem:   Out of the line! (eolymp 5973)
// Link:      https://eolymp.com/problems/5973
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-07 21:10 UTC
// Verdict:   Accepted

typedef unsigned long long ll;
#define elif else if
#define pb push_back
#define FAST_READ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

#include <iostream>
#include <cmath>

ll ans[91];
ll n;

int main(){
      ans[1] = 1; ans[2] = 2;
      for(ll i = 3; i < 91; i++){
            ans[i] = ans[i-1] + ans[i-2] + 1;
      }
      cin >> n;
      cout  << ans[n] << endl;
      return 0;
}
