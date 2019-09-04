// Problem:   Alter Board (eolymp 7624)
// Link:      https://eolymp.com/problems/7624
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-04 18:57 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	printf("%d\n", n / 2 + m / 2);
	for (int x = 2; x <= n; x += 2) printf("%d %d %d %d\n", x, 1, x, m);
	for (int y = 2; y <= m; y += 2) printf("%d %d %d %d\n", 1, y, n, y);
	return 0;
}
