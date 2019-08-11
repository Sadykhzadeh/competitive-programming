// Problem:   Function tabulation (eolymp 2864)
// Link:      https://eolymp.com/problems/2864
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-11 20:40 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>

double fun(double x){
	return 3 * sin(x);
}

int main(){
	double a, b, h;
	std::cin >> a >> b >> h;
	while (a <= b){
		printf("%.3lf %.3lf\n", a, fun(a));
		a += h;
	}
	return 0;
}
