// Problem:   Soda Supplier (eolymp 542)
// Link:      https://eolymp.com/problems/542
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-09-30 18:01 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>

ll a, b, c;

int main(){
      cin >> a >> b >> c;
      if(a + b == 0) cout << 0 << endl;
      else cout << (a + b - 1) / (c - 1) << endl;
      return 0;
}
