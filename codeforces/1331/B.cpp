// Problem:   Limericks (Codeforces 1331B)
// Link:      https://codeforces.com/contest/1331/problem/B
// Rating:    -   Tags: *special, math, number theory
// Language:  C++17 (GCC 7-32)
// Submitted: 2020-04-03 22:42 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 2; i <= n; i++) {
    while (n % i == 0) {
      cout << i;
      n /= i;
    }
  }
  return 0;
}
