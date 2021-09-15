// Problem:   Price labels (eolymp 2661)
// Link:      https://eolymp.com/problems/2661
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2021-09-15 10:44 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
#define ll long long
#define F_READ                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(0)
using namespace std;

// vars
ll m, n;
set<ll> ss;

int main() {
  // input
  cin >> m;
  for (ll i = 0; i < m; i++) {
    ll temp;
    cin >> temp;
    ss.insert(temp);
  }
  cin >> n;
  for (ll i = 0; i < n; i++) {
    ll temp;
    cin >> temp;
    ss.insert(temp);
  }

  // output
  for (set<ll>::iterator i = ss.begin(); i != ss.end(); i++) cout << *(i) << ' ';
  return cout << endl, 0;
}
