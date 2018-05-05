// Problem:   Angles of triangle (eolymp 1614)
// Link:      https://eolymp.com/problems/1614
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-05 14:03 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	double x1 , y1 , x2 , y2 , x3 , y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double a , b , c;
	a = sqrt( ( x2 - x1 ) * ( x2 - x1 ) + ( y2 - y1 ) * ( y2 - y1 ) );
	b = sqrt( ( x2 - x3 ) * ( x2 - x3 ) + ( y2 - y3 ) * ( y2 - y3 ) );
	c = sqrt( ( x3 - x1 ) * ( x3 - x1 ) + ( y3 - y1 ) * ( y3 - y1 ) );
    double u[3] , maxi = -101;
    u[0] = acos( ( b * b + c * c - a * a ) / ( 2 * b * c ) );
	u[1] = acos( ( a * a + b * b - c * c ) / ( 2 * a * b ) );
	u[2] = acos( ( a * a + c * c - b * b ) / ( 2 * a * c ) );
	for(int i = 0 ; i < 3 ; i++){
		u[i] *= (180 / M_PI);
	    if (u[i] > maxi) maxi = u[i];
	}
	cout << fixed << setprecision(6) << maxi << endl;
	return 0;
}
