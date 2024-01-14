// Problem:   The staircase (eolymp 262)
// Link:      https://eolymp.com/problems/262
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2024-01-14 11:17 UTC
// Verdict:   Accepted

#include <iostream>
#include <vector>

using namespace std;

vector <int> a;
int n, k, result;

int main() {
  cin >> n;
  a.resize(n + 2);
  for(int i = 1; i <= n; i++) { int temp; cin >> temp; a[i] = temp; }
  cin >> k;

  for(int i = 1; i <= n + 1; i++) {
      result = -999999;
      for(int j = i - k; j < i; j++) {
         if(j < 0) j = 0;
         if(result < a[j]) result = a[j];
      }
      a[i] += result;
      cerr << a[i] << " ";
  }

  cerr << endl;
  return cout << a[n + 1] << endl, 0;
}
