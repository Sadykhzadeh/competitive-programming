// Problem:   Black Box (eolymp 1225)
// Link:      https://eolymp.com/problems/1225
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2021-09-18 17:18 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
#define ll long long
#define ins insert
#define F_READ                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(0)
using namespace std;

// all required variables
ll a, b;
vector<ll> vec;
multiset<ll> mul;

int main() {
  F_READ;
  // input
  cin >> a >> b;
  for (ll i = 0; i < a; i++) {
    ll temp; cin >> temp;
    vec.push_back(temp);
  }
  mul.insert(999999999999999);
  auto it = mul.begin();
  for (ll i = 0; i < b; i++) {
    ll temp; cin >> temp;
    for (ll j = mul.size() - 1; j < temp; j++) {
      mul.ins(vec[j]);
      if (*it > vec[j]) it--;
    }
    cerr << mul.size() << '\n';
    // output
    cout << *it << '\n';
    it++;
  }
  return mul.clear(), 0;
}
