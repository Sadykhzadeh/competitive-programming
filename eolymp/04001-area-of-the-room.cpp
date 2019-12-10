// Problem:   Area of the room (eolymp 4001)
// Link:      https://eolymp.com/problems/4001
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-12-10 18:14 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

char m[1012][1012];
ll coun(0), n;
ll hello, hello1;

void dfs(ll i, ll j){
  if ((i < 0) || (i >= n) || (j < 0) || (j >= n)) return;
  if (m[i][j] == '*') return;
  else{
	m[i][j] = '*'; coun++;
	dfs(i-1,j); dfs(i+1,j);
	dfs(i,j-1); dfs(i,j+1);
  }
}

int main(){
    cin >> n;
    for(ll i = 0; i < n; i++) for(ll j = 0; j < n; j++) cin >> m[i][j];
    cin >> hello >> hello1;
    hello--; hello1--;
    dfs(hello, hello1);
    cout << coun << endl;
}
