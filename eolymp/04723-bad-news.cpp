// Problem:   Bad news (eolymp 4723)
// Link:      https://eolymp.com/problems/4723
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-06-13 10:24 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main() {
  int a , n , cnt = 0;
  cin >> n;
  for(int i = 0 ; i < n ; i++){
      cin >> a; if(a == 0) cnt++;
  }
  cout << cnt << endl;
  return 0;
}
