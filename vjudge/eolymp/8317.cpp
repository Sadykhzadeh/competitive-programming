// Problem:   EOlymp 8317
// Link:      https://eolymp.com/problems/8317
// Language:  C++
// Submitted: 2018-11-26 21:32 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll a, b;
string s;

int main(void){ 
  cin >> s;
  sort(s.begin(),s.end(),greater<char>());
  sscanf(s.c_str(),"%d",&a);
  sort(s.begin(),s.end(),less<char>());
  sscanf(s.c_str(),"%d",&b);
  cout << (a-b)*(a-b) << endl;
  return 0;
}
