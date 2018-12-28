// Problem:   Two circles (eolymp 4)
// Link:      https://eolymp.com/problems/4
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-28 22:02 UTC
// Verdict:   Accepted

typedef long double ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll a, b, c, d, e, f;

int main(){
    double x1, y1, r1;
    double x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    if( x1 == x2 && y1 == y2 && r1 == r2 ) cout << -1 << endl;
	elif( sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ) == r1+r2 || sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ) + r2 == r1 || sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ) + r1 == r2 )	cout << 1 << endl;
	elif( sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ) > r1+r2  )cout << 0 << endl;
	elif( sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ) + r2 < r1 || sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ) + r1 < r2 ) cout << 0 << endl;
	else cout << 2 << endl;
        return 0;
}
