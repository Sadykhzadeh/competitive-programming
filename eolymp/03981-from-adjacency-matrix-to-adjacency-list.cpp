// Problem:   From adjacency matrix to adjacency list (eolymp 3981)
// Link:      https://eolymp.com/problems/3981
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-21 22:08 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

int main(){
      int n , n1;
      cin >> n;
      n1 = n;
      while(n--){
            int cnt = 0, a[100000];
            for(int i = 0 ; i < n1; i++) cin >> a[i];
            for(int i = 0 ; i < n1; i++){
                  if(a[i] == 1){ cnt++; a[i] = -1;}
            }
            cout << cnt;
            for(int i = 0 ; i < n1; i++){
                  if(a[i] == -1) cout << " " << i+1;
            }
            cout << endl;
      }
      return 0;
}
