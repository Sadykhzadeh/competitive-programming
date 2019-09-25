// Problem:   Dawid and Bags of Candies (Codeforces 1230A)
// Link:      https://codeforces.com/contest/1230/problem/A
// Rating:    800   Tags: brute force, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-25 09:38 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if(
       (a + b == c + d)
       ||
       (a + c == b + d)
       ||
       (a + d == b + c)
       ||
       (a == b + c + d)
       ||
       (b == a + c + d)
       ||
       (c == a + b + d)
       ||
       (d == a + b + c)
       ) cout << "YES" << endl;
       else cout << "NO" << endl;
    return 0;
}
