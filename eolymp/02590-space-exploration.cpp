// Problem:   Space Exploration (eolymp 2590)
// Link:      https://eolymp.com/problems/2590
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-19 15:01 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

char m[1012][1012];
ll coun(0), n;

void dfs(ll i, ll j){
  if ((i < 0) || (i >= n) || (j < 0) || (j >= n)) return;
  if (m[i][j] == '.') return;
  m[i][j] = '.';
  dfs(i-1,j); dfs(i+1,j);
  dfs(i,j-1); dfs(i,j+1);
}

int main(){
    cin >> n;
    for(ll i = 0; i < n; i++)
    for(ll j = 0; j < n; j++) cin >> m[i][j];
    for(ll i = 0; i < n; i++)
    for(ll j = 0; j < n; j++){
       if (m[i][j] == '*') {dfs(i,j); coun++;}
    }
    cout << coun << endl;
}
