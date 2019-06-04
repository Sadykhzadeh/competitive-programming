// Problem:   Vanya and Lanterns (Codeforces 492B)
// Link:      https://codeforces.com/contest/492/problem/B
// Rating:    1200   Tags: binary search, implementation, math, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-04 12:33 UTC
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

long double n, k;
vector <long double> s;

int main(){
    F_READ;
    cin >> n >> k;
    for(ll i = 0; i < n; i++){
        ll temp; cin >> temp; s.pb(temp);
    } sort(s.begin(), s.end());
    long double dif(abs(0 - s[0]));
    for(ll i = 0; i < n - 1; i++){
        if((-s[i] + s[i+1]) / 2 > dif){
            dif = (-s[i] + s[i+1]) / 2;
        }
    }
    if(abs(s[n-1] - k) > dif) dif = abs(s[n-1] - k);
    return cout << fixed << setprecision(9) << dif << endl, 0;
}
