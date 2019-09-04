// Problem:   Black and White (eolymp 7613)
// Link:      https://eolymp.com/problems/7613
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-04 18:55 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

char s[4][3000];


int main() {
	int b, i, w, z;
	memset(s, 0, sizeof s);
	scanf("%d %d", &b, &w);
	z = max(b, w) * 2;
	printf("%d %d\n", 4, z);
	for (i = 0; i < w - 1; i++)
	{
		s[0][2 * i] = '.';
		s[0][2 * i + 1] = '@';
	}
	for (i = 2 * w - 2; i < z; i++) s[0][i] = '@';
	for (i = 0; i < z; i++)
	{
		s[1][i] = '@';
		s[2][i] = '.';
	}
	for (i = 0; i < b - 1; i++)
	{
		s[3][2 * i] = '.';
		s[3][2 * i + 1] = '@';
	}
	for (i = 2 * b - 2; i < z; i++) s[3][i] = '.';
	for (i = 0; i < 4; ++i) puts(s[i]);
	return 0;
}
