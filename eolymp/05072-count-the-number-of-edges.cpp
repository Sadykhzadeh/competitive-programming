// Problem:   Count the number of edges (eolymp 5072)
// Link:      https://eolymp.com/problems/5072
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-12 18:08 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

int main(){
      int n , cnt = 0;
      cin >> n;
      for(int i = 0 ; i < n * n ; i++){
            int temp;
            cin >> temp;
            if(temp == 1) cnt++;
      }
      cout << cnt;
      return 0;
}
