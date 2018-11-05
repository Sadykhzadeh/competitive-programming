// Problem:   Explosive containers (eolymp 5091)
// Link:      https://eolymp.com/problems/5091
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-05 19:09 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll n, a[50], ans(0);

int main(){
    cin >> n;
    a[0] = 1; a[1] = 2;
    for(ll i = 2; i < 50; i++) a[i] = a[i-1] + a[i-2];
    a[0] = 0;
    cout << a[n];
    return 0;
}
