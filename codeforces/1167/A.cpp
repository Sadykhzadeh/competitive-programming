// Problem:   Telephone Number (Codeforces 1167A)
// Link:      https://codeforces.com/contest/1167/problem/A
// Rating:    800   Tags: brute force, greedy, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-05-29 21:16 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq2(x,y) cout << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
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

#include <bits/stdc++.h>

using namespace std;


int main(){ ll n;
    string s;
    ll t; cin >> t;
    while(t--){
            bool as = false;
    cin >> n >> s; ll pop = s.length();
    for(ll i = 0; i <= pop; i++){
        if(s[i] == '8' && 11 <= abs(n - i)){
            as = true; break;
        }
    }
    if(as) cout << "YES" << endl; else cout << "NO" << endl;
    }
}
