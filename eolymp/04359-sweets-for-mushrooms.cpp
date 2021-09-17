// Problem:   Sweets for mushrooms (eolymp 4359)
// Link:      https://eolymp.com/problems/4359
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2021-09-17 14:23 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

multiset<ll> ms;
ll n;

int main() {
  cin >> n;
  for (ll i = 0; i < n; i++) {
    ll temp;
    cin >> temp;
    ms.ins(temp);
  }
  while (ms.size() != 1) {
    ll x = *ms.begin(); 
    ms.erase(ms.begin());
    ll y = *ms.begin();
    if (x + x > y) { ms.erase(ms.begin()); ms.ins(x + x); }
  }
  return cout << *ms.begin() << endl, 0;
}
