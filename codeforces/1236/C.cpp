// Problem:   Labs (Codeforces 1236C)
// Link:      https://codeforces.com/contest/1236/problem/C
// Rating:    1300   Tags: constructive algorithms, greedy, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-10-17 15:04 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>


using namespace std;
int main(){
    int n;
    cin >> n;
    bool down = true;
    vector <vector <int>>  ans(n);
    for(int i = 0; i < n; ++i) {
        for(int j = 1; j <= n; ++j) {
            if(down) ans[j - 1].push_back(j + n * i);
            else ans[n - j].push_back(j + n * i);
    }
    down = !down;
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; ++j) cout << ans[i][j] << ' ';
    cout << '\n';
  }
  return 0;
}
