// Problem:   Sightseeing trip (eolymp 7460)
// Link:      https://eolymp.com/problems/7460
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-28 22:10 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll m, n, k, ans , ans1;

int main(){
    cin >> n >> m >> k;
    ans = n / k;
    if(n % k != 0) ans++;
    ans1 = m / k;
    if(m % k != 0) ans1++;
    cout << ans + ans1 << endl;
    return 0;
}
