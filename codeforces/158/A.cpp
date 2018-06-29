// Problem:   Next Round (Codeforces 158A)
// Link:      https://codeforces.com/contest/158/problem/A
// Rating:    800   Tags: *special, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-29 12:32 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main() {
  int n , k,cnt(0);
  cin >> n >> k;
  int a[n];
  for(int i = 0 ; i < n ; i++) cin >> a[i];
  for(int i = 0 ; i < n ; i++){
    if(a[i] >= a[k-1] && a[i] > 0) cnt++;
  }
  cout << cnt << endl;
  return 0;
}
