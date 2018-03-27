// Problem:   Sum of squares (eolymp 4725)
// Link:      https://eolymp.com/problems/4725
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-27 06:48 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n , i = 1 , sum = 0;
    cin >> n;
    while( i != n + 1){
        sum += i * i;
        i++;
    }
    cout << sum << endl;
	return 0;
}
