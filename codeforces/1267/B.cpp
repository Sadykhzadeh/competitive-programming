// Problem:   Balls of Buma (Codeforces 1267B)
// Link:      https://codeforces.com/contest/1267/problem/B
// Rating:    900
// Language:  C++17 (GCC 7-32)
// Submitted: 2019-12-01 08:33 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;
string s, w;
long long l, r, k, o, ijh;

int main()
{
  cin >> s;
  for (l = 0, r = s.size() - 1; l < r; )
  {
    if (s[l] != s[r]) { cout << 0 << endl; return 0; }
	w[0] = s[l]; k = 2; ijh = l;
  	while (r - l != 1)
  	{
  	  if (s[l + 1] == w[0] && l + 1 < r) { l++; k++; }
  	  if (s[r - 1] == w[0] && l < r - 1) { r--; k++; }
	  if (s[r - 1] != w[0] && s[l + 1] != w[0]) break;
	}
	if (k < 3 && r - l != 1) { cout << 0 << endl; return 0; }
	if (r - l == 1) 
	{ 
	  for (int i = ijh; i < s.size(); i++)
	    if (s[i] == w[0]) 
	      o++;
	    else if (o)
	      break;
	  cout << ++o << endl;
	  return 0; 
	} 
	l++; r--;
  }
  cout << 0 << endl;
}
