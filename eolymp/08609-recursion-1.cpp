// Problem:   Recursion - 1 (eolymp 8609)
// Link:      https://eolymp.com/problems/8609
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-05 19:14 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll n, res(0);

int main(){
    cin >> n;
    for(ll i = 1; i <= n; i++) res+=i;
    cout << res << endl;
    return 0;
}
