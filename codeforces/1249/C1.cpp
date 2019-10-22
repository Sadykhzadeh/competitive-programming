// Problem:   Good Numbers (easy version) (Codeforces 1249C1)
// Link:      https://codeforces.com/contest/1249/problem/C1
// Rating:    1300   Tags: brute force, greedy, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-10-22 16:21 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  ll t; cin>>t;
  for(ll z = 0; z < t; z++){
    ll x; cin>>x; ll f = 0;
    while(pow(3, f) < x) f++;
    if(pow(3, f) == x){
      cout << pow(3, f) << endl;
      continue;
        }
    ll ans = pow(3,f);
    for(ll i = 0; i <= (1 << (f-1)); i++){
      ll temp = pow(3, f-1);
      for(ll j = 0; j < f-1; j++){
        if(((i >> j)&1)){
          temp += pow(3, j);
        }
      }
      if(temp >= x){ans = temp; break;}
    }
    cout << ans << endl;
  }
  return 0;
}
