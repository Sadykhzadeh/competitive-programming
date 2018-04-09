// Problem:   Number of trailing zeros in factorial (eolymp 123)
// Link:      https://eolymp.com/problems/123
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-09 22:22 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;

int main() {
int n;
	scanf("%d",&n); 


int res = 0;

while(n > 0)

{

  n /= 5;

  res += n;

}


 

printf("%d\n",res);

 
	return 0;
}
