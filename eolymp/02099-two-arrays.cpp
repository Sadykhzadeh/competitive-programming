// Problem:   Two arrays (eolymp 2099)
// Link:      https://eolymp.com/problems/2099
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2021-09-15 13:44 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
#define ll long long
#define F_READ                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(0)
using namespace std;

// vars
ll m, n;
vector <ll> a;
set <ll> b;

int main() {
  F_READ;
  
  // input
  cin >> n;
  for (ll i = 0; i < n; i++) {
      ll temp; cin >> temp; a.push_back(temp);
  }
  cin >> m;
  for(ll i = 0; i < m; i++) {
      ll temp; cin >> temp; b.insert(temp);
  }

  vector <ll> ans;
  for(ll i = 0; i < n; i++) {
    bool flag = true;
    for(set<ll>::iterator it = b.begin(); it != b.end(); it++) {
        if (a[i] == *it) {
            flag = false; break;
        }
    }
    if(flag) ans.push_back(a[i]);
  }

  // output
  cout << ans.size() << endl;
  for(auto i: ans) cout << i << " ";
  return cout << endl, 0;
}
