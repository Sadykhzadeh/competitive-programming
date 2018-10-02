// Problem:   Cities and roads (eolymp 992)
// Link:      https://eolymp.com/problems/992
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-02 06:35 UTC
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
      cout << cnt/2;
      return 0;
}
