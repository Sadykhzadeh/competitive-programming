// Problem:   Nonoptimal Assignments (eolymp 5661)
// Link:      https://eolymp.com/problems/5661
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-04 18:53 UTC
// Verdict:   Accepted

#include <iostream>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n - 1; i++)
			for (int j = 0; j < n; j++)
			{
				printf("%d", j > i ? 1 : 0);
				putchar(j == n - 1 ? '\n' : ' ');
			}
		for (int j = 0; j < n - 1; j++) printf("%d ", 0);
		puts("100\n");
	}
	return 0;
}
