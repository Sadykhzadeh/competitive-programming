// Problem:   EOlymp 2323
// Link:      https://eolymp.com/problems/2323
// Language:  C++
// Submitted: 2018-11-26 21:10 UTC
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
  cout << a+b << endl;
  return 0;
}
