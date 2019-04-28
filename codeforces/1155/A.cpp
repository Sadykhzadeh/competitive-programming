// Problem:   Reverse a Substring (Codeforces 1155A)
// Link:      https://codeforces.com/contest/1155/problem/A
// Rating:    1000   Tags: implementation, sortings, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-28 13:31 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007

using namespace std;

#include <bits/stdc++.h>

ll n;
string s;

int main(){
    F_READ;
    cin >> n >> s;
    for(ll i = 1; i < n; i++){
        if(s[i] < s[i-1]){
            return cout << "YES" << endl << i << ' ' << i + 1 << endl, 0;
        }
    }
    return cout << "NO" << endl, 0;
}
