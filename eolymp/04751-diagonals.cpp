// Problem:   Diagonals (eolymp 4751)
// Link:      https://eolymp.com/problems/4751
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-09-30 17:52 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>

ll n , a;
ll answer_1(0), answer_2(0);

int main(){
      cin >> n;
      for(ll i = 0 ; i < n ; i++){
            for(ll j = 0 ; j < n ; j++){
                  cin >> a;
                  if(i == j) answer_1 += a;
                  if(i + j == n - 1) answer_2 += a;
            }
      }
      cout << answer_1 << ' ' << answer_2 << endl;
      return 0;
}
