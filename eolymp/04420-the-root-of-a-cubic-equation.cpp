// Problem:   The root of a cubic equation (eolymp 4420)
// Link:      https://eolymp.com/problems/4420
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-05-01 20:13 UTC
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

double a, b, c, d, l, r, x;

double f(double x){
	return a*x*x*x + b*x*x + c*x + d;
}

int main() {
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	r = 1;
	while(f(r) * f(-r) >= 0) r *= 2;
	l = -r;
	while(r - l > 1e-12){
		x = (l + r) / 2;
		if (f(x) * f(r) > 0) r = x;
		else l = x;
	}
	printf("%.9lf\n", l);
	return 0;
}
