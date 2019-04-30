// Problem:   Crossed Ladders (eolymp 1506)
// Link:      https://eolymp.com/problems/1506
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-30 19:35 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007

using namespace std;

#include <bits/stdc++.h>

int main() {
	double a, b, c, c1, d, x, y, Left, Right;
	while(scanf("%lf %lf %lf", &x, &y, &c) == 3){
		Left = 0;
		if(x < y) Right = x;
		else Right = y;
		d = (Left + Right) / 2;
		do{
			a = sqrt(x*x - d*d);
			b = sqrt(y*y - d*d);
			c1 = 1 / (1 / a + 1 / b);

			if (c1 < c) Right = (Left + Right) / 2;
			else Left = (Left + Right) / 2;
			d = (Left + Right) / 2;

		}while(fabs(c1 - c) > 0.00001);
		cout << fixed << setprecision(3) << d << endl;
	}
	return 0;
}
