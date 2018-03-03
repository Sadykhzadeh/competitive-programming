// Problem:   The number-palindrome (eolymp 1608)
// Link:      https://eolymp.com/problems/1608
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-03 10:29 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;
long long Per(long long x)
{
   long long  y = 0;
   while(x)
   {
       y = y*10 + x%10;
       x /= 10;
   }
   return y;
}

int main() {
	long long  x , y;
	cin >> x;
	y = Per(x);
	if(x==y) cout << "Yes";
	else cout <<"No";
	return 0;
}
