// Problem:   iccanobiF (eolymp 4732)
// Link:      https://eolymp.com/problems/4732
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-07 19:14 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

ll a[46];
ll n;

int main(){
      a[0] = a[1] = 1;
      for(ll i = 2; i <= 45; i++){
            a[i] = a[i-1] + a[i-2];
      }
      cin >> n;
      for(ll i = 0; i <= 45; i++){
            if(a[i] == n){ cout << i << endl; return 0;}
      }
}
