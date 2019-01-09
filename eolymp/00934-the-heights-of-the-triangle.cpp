// Problem:   The heights of the triangle (eolymp 934)
// Link:      https://eolymp.com/problems/934
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-09 22:42 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main() {
  double a , b , c;
  cin >> a >> b >> c;
  double p = (a + b + c) / 2;
  double s = sqrt(p * (p - a) * (p - b) * (p - c));
  double ha = (2 * s) / a , hb = (2 * s) / b , hc = (2 * s) / c;
  cout << fixed << setprecision(2) << ha << " " << hb << " " << hc << endl;
  return 0;
}
