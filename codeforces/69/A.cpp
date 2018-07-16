// Problem:   Young Physicist (Codeforces 69A)
// Link:      https://codeforces.com/contest/69/problem/A
// Rating:    1000   Tags: implementation, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-16 08:43 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
#include <vector>


using namespace std;

int main(){
      int n ;
      cin >> n;
      int a = 0, b = 0, c = 0;
      while(n--){
            int q(0), w(0) , e(0);
            cin >> q >> w >> e;
            a+=q; b+=w; c+=e;
      }
      if(a == 0 && b == 0 && c == 0)cout << "YES"<< endl;
      else cout << "NO" << endl;
      return 0;
}
