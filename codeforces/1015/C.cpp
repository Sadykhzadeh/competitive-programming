// Problem:   Songs Compression (Codeforces 1015C)
// Link:      https://codeforces.com/contest/1015/problem/C
// Rating:    1100   Tags: sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-31 17:10 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

long long a , b , c , d , su  =0, ans = 0;
vector <long long> vec;

int main(){
     cin >> a >> b;
     for(int i =0 ; i <a; i++){ cin >> c >> d; su+=c; vec.push_back(abs(c-d));}
     sort(vec.begin(),vec.end(),greater<int>());
     if(su < a){ cout << ans; return 0;}
     for(int i = 0; i < a; i++){
          if(su <= b) break;
          su -= vec[i];
          ans = i+1;
     }
     if(su > b)ans=-1;
     cout << ans << endl;
     return 0;
}
