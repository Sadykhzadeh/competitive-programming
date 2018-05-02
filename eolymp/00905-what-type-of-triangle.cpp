// Problem:   What type of triangle? (eolymp 905)
// Link:      https://eolymp.com/problems/905
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-02 07:54 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a , b, c;
    cin >> a >> b >> c;
    if(a==b && b ==c) cout << 1;
    else if( a== b || b==c || a==c) cout << 2;
    else cout << 3;
    return 0;
}
