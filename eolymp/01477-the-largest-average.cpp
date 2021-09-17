// Problem:   The largest average (eolymp 1477)
// Link:      https://eolymp.com/problems/1477
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2021-09-17 14:19 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

multimap<ll, ll> mp;
ll n;

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    ll temp;
    cin >> temp;
    mp.ins(pair<ll, ll>(temp, i + 1));
  }
  while (mp.size() != 1) {
    pair<ll, ll> x = *mp.begin();
    mp.erase(mp.begin());

    pair<ll, ll> y = *mp.begin();
    mp.erase(mp.begin());

    cout << min(x.second, y.second) << " " << max(x.second, y.second) << endl;
    n++;
    mp.ins(pair<ll, ll>((x.first + y.first) / 2, n));
  }
  return 0;
}
