// Problem:   Tanya and Stairways (Codeforces 1005A)
// Link:      https://codeforces.com/contest/1005/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-16 08:29 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
      int n , a[10000] , cnt = 1;
      cin >> n;
      vector <int > q;
      for(int i = 0; i < n ; i++) cin >> a[i];
      for(int i = 0 ;i < n - 1; i++){
            if(a[i+1] - a[i] == 1) continue;
            if(a[i+1] == 1){cnt++; q.push_back(a[i]);}
      }
      q.push_back(a[n-1]);
      cout << cnt << endl;;
      for(int i = 0 ;i < q.size() ; i++) cout << q[i] << ' ';
      cout << endl;
      return 0;
}
