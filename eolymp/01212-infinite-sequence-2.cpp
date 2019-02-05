// Problem:   Infinite Sequence - 2 (eolymp 1212)
// Link:      https://eolymp.com/problems/1212
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-02-05 13:37 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll a[5123456];

long long calc(ll n, ll p, ll q, ll x, ll y){ ll temp;
  if (n <= 0) return 1;
  if ((n < 5123456) && a[n]) return a[n];
  temp = calc(n / p - x, p, q, x, y) + calc(n / q - y, p, q, x, y);
  if (n < 5123456) a[n] = temp;
  return temp;
}

ll n, p , q, x, y;

int main(){
    cin >> n >> p >> q >> x >> y;
    cout << calc(n, p, q, x, y) << endl;
    return 0;
}
