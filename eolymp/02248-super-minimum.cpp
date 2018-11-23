// Problem:   Super minimum (eolymp 2248)
// Link:      https://eolymp.com/problems/2248
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-23 23:53 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
ll n, k, v, q[1000098], m[1000098], qh, qt, mh, mt;

int main(void)
{
  cin >> n >> k;
  ll i = 1;
  qh = qt = mh = mt = 0;
  for(i = 1; i <= k; i++){
    cin >> v;
    q[qt++] = v;
    while((mh < mt) && (v < m[mt-1])) mt--;
    m[mt++] = v;
  }
  cout << m[mh] << ' ';
 
  for(; i <= n; i++){
    cin >> v;
    if (q[qh] == m[mh]) mh++; qh++;
    q[qt++] = v;
    while((mh < mt) && (v < m[mt-1])) mt--;
    m[mt++] = v;
    cout << m[mh] << ' ';
  }
  cout << endl;
  return 0;
}
