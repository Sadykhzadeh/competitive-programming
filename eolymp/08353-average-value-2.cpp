// Problem:   Average value - 2 (eolymp 8353)
// Link:      https://eolymp.com/problems/8353
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-21 08:03 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	int a , j1 , kj1 , j2 , kj2 ,g1, kg1 , g2,kg2, s , n ;
	j1 = j2 = kg1 = kg2 = kj1 = kj2 = s = n = 0;
	g1 = g2 = 500;
	while( cin >> a ){
		n++; s += a;
		if( a > j1 ){
			j2 = j1 ;
			kj2 = kj1 ;
			j1 = a ; kj1 = 1;
		}
		else if( a == j1 ) kj1++;
		else if( a > j2 ){
			j2 = a;
			kj2 = 1;
		}
		else if( a == j2 ) kj2++;
		
		if( a < g1 ){
			g2 = g1 ;
			kg2 = kg1;
			g1 = a; kg1 = 1;
		}
		else if( a == g1 ) kg1++;
		else if( a < g2 ){
			g2 = a;
			kg2 = 1;
		}
		else if( a == g2 ) kg2++;
	}
	n -= ( kj1 + kj2 + kg1 + kg2 );
	s -= ( j1 * kj1 + j2 * kj2 + g1 * kg1 + g2 * kg2 );
	float ans = ( float ) s / n;
	printf( "%.0f", ans);
	return 0;
}
