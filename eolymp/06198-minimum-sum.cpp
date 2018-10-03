// Problem:   Minimum Sum (eolymp 6198)
// Link:      https://eolymp.com/problems/6198
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-03 19:23 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

vector <ll> a;
vector <ll> b;
ll n, temp;

int main(){
      cin >> n;
      for(ll i = 0 ; i < n; i++){
          cin >> temp; a.pb(temp);
      }
      for(ll i = 0 ; i < n; i++){
          cin >> temp; b.pb(temp);
      }
      sort(a.begin(), a.end());
      sort(b.begin(), b.end());
      reverse(b.begin(), b.end());
      temp = 0;
      for(ll i = 0 ; i < a.size(); i++){
            temp += (ll)(a[i]*b[i]);
      }
      cout << temp;
      return 0;
}
