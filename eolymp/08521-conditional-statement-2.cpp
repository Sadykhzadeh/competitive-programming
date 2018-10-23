// Problem:   Conditional statement - 2 (eolymp 8521)
// Link:      https://eolymp.com/problems/8521
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-23 13:03 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>

ll n;

int main(){
      cin >> n;
      if(n >= 10) cout << n*n*n + 5*n << endl;
      else cout << n*n - 2*n + 4 << endl;
      return 0;
}
