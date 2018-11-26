// Problem:   EOlymp 8316
// Link:      https://eolymp.com/problems/8316
// Language:  C++
// Submitted: 2018-11-26 21:12 UTC
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
  sort(s.begin(),s.end(),less<char>());
  cout << s << endl;
  sort(s.begin(),s.end(),greater<char>());
  cout << s << endl;
  return 0;
}
