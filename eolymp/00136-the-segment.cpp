// Problem:   The Segment (eolymp 136)
// Link:      https://eolymp.com/problems/136
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-02 09:25 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll a , b, c, d;

int main(){
      cin >> a >> b >> c >> d;
      cout << 1 + __gcd(abs(c-a), abs(d-b)) << endl;
      return 0;
}
