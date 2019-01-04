// Problem:   Petr and a Combination Lock (Codeforces 1097B)
// Link:      https://codeforces.com/contest/1097/problem/B
// Rating:    1200   Tags: bitmasks, brute force, dp
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-01-04 19:16 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

long long n;

int main(){
    cin >> n;
    vector<long long > a(n);
    for(long long i = 0; i < n; ++ i){
        scanf("%d", &a[i]);
    }
    for(long long mask = 0; mask < 1 << n; ++ mask) {
    long long val = 0;
    for(long long i = 0; i < n; ++ i)
      if (mask >> i & 1)
        val += a[i];
      else
        val -= a[i];
    if(!(val % 360)){
      puts("YES");
      return 0;
    }
  }
  puts("NO");
}
