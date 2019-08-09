// Problem:   The number of ones (eolymp 44)
// Link:      https://eolymp.com/problems/44
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-09 13:20 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main() {
	int n, res[5001];
	scanf("%d", &n);
	res[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		res[i] = i;
		for (int j = 1; 2 * j < i; j++)
			if (res[j] + res[i - j] < res[i]) res[i] = res[j] + res[i - j];
		for (int j = 2; j * j <= i; j++)
			if (i % j == 0 && res[j] + res[i / j] < res[i]) res[i] = res[j] + res[i / j];
	}
	printf("%d\n", res[n]);
	return 0;
}
