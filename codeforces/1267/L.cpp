// Problem:   Lexicography (Codeforces 1267L)
// Link:      https://codeforces.com/contest/1267/problem/L
// Rating:    1800   Tags: constructive algorithms, strings
// Language:  C++17 (GCC 7-32)
// Submitted: 2019-12-01 10:03 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;
string s, a[1111];
long long n, l, k, o, j = 1;

int main()
{
  cin >> n >> l >> k >> s; 
  sort(s.begin(), s.end());
  for (int i = 0; i < k; i++)
  {
    a[i] += s[o]; o++;
  }
  while (j < l)
  {
  	int i = 0; j++;
  	while (a[i] != a[k - 1])
  	{
  	  i++;
	}
	for (int jh = i; jh < k; jh++) { a[jh] += s[o]; o++; }
  }
  for (int i = 0; i < n; i++)
    for (j = 0; j < l; j++)
	  if (a[i].size() < l)
	    { a[i] += s[o]; o++; }
  for (int i = 0; i < n; i++)
    cout << a[i] << endl;
}
