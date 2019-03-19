// Problem:   The sum of powers of two (eolymp 2733)
// Link:      https://eolymp.com/problems/2733
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-03-19 07:30 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007

using namespace std;

#include <bits/stdc++.h>

ll a, b;

int main(){
    cin >> a >> b;
    cout << (1 << a) + (1 << b) << endl;
    return 0;
}
