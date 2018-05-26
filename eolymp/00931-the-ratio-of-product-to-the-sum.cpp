// Problem:   The ratio of product to the sum (eolymp 931)
// Link:      https://eolymp.com/problems/931
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-26 08:12 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
 
 
int main() {
    int n, sum = 0; 
    double k = 0, mult = 1;
    cin >> n;
    while(n != 0){
    	k = n % 10;
    	sum += k;
    	mult *= k;
    	n /= 10;
    }    
    cout << fixed << setprecision(3) << mult / sum << endl;
	return 0;
}
