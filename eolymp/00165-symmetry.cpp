// Problem:   Symmetry (eolymp 165)
// Link:      https://eolymp.com/problems/165
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-06 19:25 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m;
    double k;
    cin >> n;
    m = log2(n);
    k = log2(n);
    while (m != k){
        n = n - (pow(2,m));
        m = log2(n);
        k = log2(n);
    }
    cout << m + 1;
    return 0;
}
