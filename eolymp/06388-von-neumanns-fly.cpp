// Problem:   Von Neumann`s Fly (eolymp 6388)
// Link:      https://eolymp.com/problems/6388
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-05-24 21:45 UTC
// Verdict:   Accepted

#include<bits/stdc++.h>

using namespace std;

int main(){
	double a , b , c , d, e ,f , q , ans;
	cin >> a;
	for(int i = 1; i <= a; i++){
  		cin >> b >> c >> d >> e >> f;
   		q = c / (d + e);
   		ans = q * f;
 		 cout << i;
  		cout << fixed << setprecision(2)<< " " << ans << endl;
}
	return 0;
}
