// Problem:   Points in Segments (Codeforces 1015A)
// Link:      https://codeforces.com/contest/1015/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-31 15:23 UTC
// Verdict:   Accepted

#include <iostream>
#include <vector>

using namespace std;

#define ll long long

ll n , m;
ll a[10000][2];
vector <ll> b;

int main(){
     cin >> n >> m;
     for(int i = 0 ; i < n ; i++){
          cin >> a[i][0] >> a[i][1];
     }
     for(int i = 1; i <= m; i++){
          int k = 0;
          for(int j = 0 ; j < n ; j++){
               if(a[j][0] <= i && i <= a[j][1]){k = 1; break;}
          }
          if(k == 0) b.push_back(i);
     }
     cout << b.size() << endl;
     if(b.size() != 0)for(int i = 0; i <b.size() ; i++) cout << b[i] << ' ';
     return 0;
}
