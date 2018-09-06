// Problem:   Calculating Function (Codeforces 486A)
// Link:      https://codeforces.com/contest/486/problem/A
// Rating:    800   Tags: implementation, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-09-06 10:58 UTC
// Verdict:   Accepted

#define ll long long
#define elif else if

using namespace std;

#include <iostream>

ll n;

int main(){
    cin >> n;
    if(n % 2 != 0) n = n/2 - n;
    else n /= 2;
    cout << n << endl;
}
