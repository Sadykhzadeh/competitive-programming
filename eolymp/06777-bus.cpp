// Problem:   Bus (eolymp 6777)
// Link:      https://eolymp.com/problems/6777
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-06 08:54 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll t, n;

int main(){
    cin >> t;
    while(t--){cin >> n; cout << (1 << n) - 1 << endl;}
    return 0;
}
