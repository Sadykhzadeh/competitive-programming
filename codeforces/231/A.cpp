// Problem:   Team (Codeforces 231A)
// Link:      https://codeforces.com/contest/231/problem/A
// Rating:    800   Tags: brute force, greedy
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-29 12:25 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt(0);
  for(int i = 0 ; i < n; i++){
    int a , b , c;
    cin >> a >> b >> c;
    if(a+b+c>=2) cnt++;
  }
  cout << cnt << endl;
  return 0;
}
