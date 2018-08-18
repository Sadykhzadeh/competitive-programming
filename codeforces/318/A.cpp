// Problem:   Even Odds (Codeforces 318A)
// Link:      https://codeforces.com/contest/318/problem/A
// Rating:    900   Tags: math
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-08-18 14:39 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}
