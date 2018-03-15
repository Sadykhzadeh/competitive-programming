// Problem:   Twice the minimum (eolymp 917)
// Link:      https://eolymp.com/problems/917
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-15 09:09 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
    double n , a[10000];
    cin >> n;
    for( int i = 0 ; i < n ; i++) cin >> a[i];
    double m = a[0];
    for( int i = 1 ; i < n ; i++){
    	if( m > a[i] ) m = a[i];
    }
    cout << fixed << setprecision(2) << 2 * m << endl;
    return 0;
}
