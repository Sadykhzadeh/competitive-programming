// Problem:   White hats (eolymp 7415)
// Link:      https://eolymp.com/problems/7415
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-07-26 11:23 UTC
// Verdict:   Accepted

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int whiteNumber(vector<int> &count)
{
	sort(count.begin(), count.end());
	int len = count.size(), w = count[len - 1], b = count[0];
	if (w == b && w + 1 == len) return len;
	if (w - b > 1) return -1;
	int pos = int(find(count.begin(), count.end(), w) - count.begin());
	if (pos == count[pos]) return pos;
	return -1;
}

int main() {
	int a;
	char ch;
	vector<int> c;
	while (scanf("%d%c", &a, &ch) == 2)
	{
		c.clear();
		c.push_back(a);
		while (ch != '\n')
		{
			scanf("%d%c", &a, &ch);
			c.push_back(a);
		}
		int res = whiteNumber(c);
		printf("%d\n", res);
	}
	return 0;
}
