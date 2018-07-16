// Problem:   Soldier and Bananas (Codeforces 546A)
// Link:      https://codeforces.com/contest/546/problem/A
// Rating:    800   Tags: brute force, implementation, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-16 08:21 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>

using namespace std;

int main(){
      int k , n , w;
      cin >> k >> n >> w;
      int i =1;
      while(w--){
            n -= k*i; i++;
      }
      if (n > 0) cout << 0;
      else cout << abs(n);
      cout << endl;
      return 0;
}
