// Problem:   Multiplication table (eolymp 8545)
// Link:      https://eolymp.com/problems/8545
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-09-26 08:49 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll n, cnt = 1;

int main(){
      cin >> n;
      for(ll i = 0 ; i < n; i++){
            for(ll j = 0 ; j < n; j++){
                  cout << (j + 1)*cnt << ' ';
            }
            cout << endl;
            cnt++;
      }
      return 0;
}
