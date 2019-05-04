// Problem:   Love "A" (Codeforces 1146A)
// Link:      https://codeforces.com/contest/1146/problem/A
// Rating:    800   Tags: implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-05-04 09:34 UTC
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

#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin >> a;
    ll cnt(0);
    for(ll i = 0; i < a.length(); i++){
        if(a[i] == 'a') cnt++;
    }
    if(cnt == 1 && a.length() != 1) return cout << 1, 0;
    if(cnt >= a.length() / 2 + 1) return cout << a.length() << endl, 0;
    return cout << cnt*2 - 1 << endl, 0;
}
