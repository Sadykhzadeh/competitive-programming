// Problem:   Divisibility by 3 (eolymp 7330)
// Link:      https://eolymp.com/problems/7330
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-06 09:02 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll t, n;


int main(){
    cin >> n; t = n / 3 * 2;
    if (n % 3 == 2) t++;
    cout << t << endl;
    return 0;
}
