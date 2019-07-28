// Problem:   Big accuracy (eolymp 11)
// Link:      https://eolymp.com/problems/11
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-07-28 13:33 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;
 
int main()
{
    int m, n, k, d;
    cin >> m >> n >> k;
    cout << m / n << ".";
    d = m % n;
    for (int i = 0; i < k; i ++)
    {
        d *= 10;
        cout << d / n;
        d %= n;
    }
    cout << endl;
    return 0;
}
