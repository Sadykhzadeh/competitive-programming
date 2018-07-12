// Problem:   Vive la Difference! (eolymp 3338)
// Link:      https://eolymp.com/problems/3338
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-12 19:08 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, d;
	while (true)
	{
		cin >> a >> b >> c >> d;
		if (a == 0 && b == 0 && c == 0 && d == 0) break;
		int temp, cnt = 0;
		while (true)
		{
			if (a == b && a == c && a == d) break;
			cnt++;
			temp = a;
			a = abs(a - b);
			b = abs(b - c);
			c = abs(c - d);
			d = abs(d - temp);
		}
		cout << cnt << endl;
	}
	return 0;
}
