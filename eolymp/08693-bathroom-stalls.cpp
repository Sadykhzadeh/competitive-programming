// Problem:   Bathroom Stalls (eolymp 8693)
// Link:      https://eolymp.com/problems/8693
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-27 20:26 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

map<ll, ll> mapp;
ll t, n, k;

int main() {
  cin >> t;
  for(ll tc = 1; tc <= t; tc++) {
    cin >> n >> k;
    cout << "Case #" << tc << ": ";
    mapp.clear();
    mapp[n]++;
    ll ls = -1, rs = -1;
    while(k > 0) {
      auto it = prev(mapp.end());
      ll size = it->first, count = it->second;
      mapp.erase(it);
      ls = (size - 1) / 2;      rs = size / 2;
      mapp[ls] += count;        mapp[rs] += count;
      k -= count;
    }
    ll ans = max(ls, rs), anss = min(ls, rs);
    cout << ans << ' ' << anss << endl;
  }
  return 0;
}
