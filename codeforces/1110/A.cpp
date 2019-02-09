// Problem:   Parity (Codeforces 1110A)
// Link:      https://codeforces.com/contest/1110/problem/A
// Rating:    900   Tags: math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-09 23:24 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll b, k, ans(0);
ll p = 1, s = 0;
vector <ll> a;

int main() {
  cin >> b >> k;
  for (int i = 0; i < k; i++) {
    ll temp;
    cin >> temp;
    a.pb(temp);
  }
  for(ll i = k - 1; i >= 0; i--){
    s = (s + p * a[i]) % 2;
    p = p * b % 2;
  }
  cout << (s ? "odd" : "even");
  return 0;
}
