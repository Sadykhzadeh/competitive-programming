// Problem:   Vasya and balls (eolymp 4538)
// Link:      https://eolymp.com/problems/4538
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-09 22:25 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

int main() {
int k;
scanf("%d",&k);

int n = int((-1 + sqrt(1.0 + 8*k)) / 2.0);

printf("%d\n",n);
	return 0;
}
