// Problem:   Parallelogram (eolymp 929)
// Link:      https://eolymp.com/problems/929
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-09 21:36 UTC
// Verdict:   Accepted

//typedef long long ll;
#define FAST_READ ios_base::sync_with_stdio(false)
#define elif else if
#define pb push_back
#define ins insert
#define ll double

using namespace std;

#include <bits/stdc++.h>

ll a, b, c, d;

int main(){
    FAST_READ;
    cin >> a >> b >> c >> d;
    if(
       (a == b && c == d) ||
       (a == c && b == d) ||
       (a == d && b == c)
       ) cout << "YES" << endl;
        else cout << "NO" << endl;
    return 0;
}
