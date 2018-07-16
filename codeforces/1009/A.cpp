// Problem:   Game Shopping (Codeforces 1009A)
// Link:      https://codeforces.com/contest/1009/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-16 10:24 UTC
// Verdict:   Accepted

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <cctype>
#include <cstring>

#define ll long long
#define elif else if

using namespace std;



int main(){
      int m , n;
      int a[100000], j[100000];
      cin >> n >> m;
      for(int i = 0 ; i < n ; i++) cin >> a[i];
      for(int i = 0 ; i < m ; i++) cin >> j[i];
      int k = 0 , i = 0;
      for(i = 0 ; i < n ; i++){
            if(j[k] >= a[i]){ a[i] = -1; j[k] -= a[i]; k++;}
      }
      int cnt = 0;
      for(int i = 0 ; i < n ; i++) if(a[i] == -1) cnt++;
      cout << cnt << endl;
      return 0;
}
