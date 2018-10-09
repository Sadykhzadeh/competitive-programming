// Problem:   Factorial (eolymp 1658)
// Link:      https://eolymp.com/problems/1658
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-09 09:28 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll n, ans = 1;

int main(){
    cin >> n;
    for(ll i = 2; i <= n; i++) ans*=i;
    cout << ans << endl;
    return 0;
}
