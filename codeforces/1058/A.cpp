// Problem:   In Search of an Easy Problem (Codeforces 1058A)
// Link:      https://codeforces.com/contest/1058/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-09-26 08:53 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll n, a;

int main(){
      cin >> n;
      while(n--){
            cin >> a;
            if(a == 1){
                  cout << "hard" << endl;
                  return 0;
            }
      }
      cout << "easy" << endl;
      return 0;
}
