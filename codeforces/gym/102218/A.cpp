// Problem:   Alan's Birthday (Codeforces 102218A)
// Link:      https://codeforces.com/gym/102218/problem/A
// Language:  C++17 (GCC 7-32)
// Submitted: 2019-06-08 14:23 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int n;
char in;
int c[27];

int main() {
	scanf("%d\n", &n);
	for(int i = 0; i < n; i++) {
		scanf("%c", &in);
		c[in - 'a']++;
	}
	for(int i = 0; i < 26; i++) {
		while(c[i]--) printf("%c", 'a' + i);
	}
	return 0;
}
