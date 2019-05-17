// Problem:   Quadratic equation (eolymp 911)
// Link:      https://eolymp.com/problems/911
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-05-17 11:06 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a , b, c , d , xz , xx;
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    xz = ( - b + sqrt(d)) / ( 2 * a);
    xx = ( - b - sqrt(d)) / ( 2 * a);
    if(d < 0) cout << "No roots" << endl;
    else if( d == 0 ) cout << "One root: " << xz << endl;
    else if( d > 0 ) cout << "Two roots: " << min(xz, xx) << " " << max(xx , xz) << endl;
    return 0;
}
