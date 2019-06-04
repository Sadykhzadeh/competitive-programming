// Problem:   Ehab Is an Odd Person (Codeforces 1174B)
// Link:      https://codeforces.com/contest/1174/problem/B
// Rating:    1200   Tags: sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-04 12:59 UTC
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

vector <ll> a;
ll n;
ll q, w;

int main(){
    F_READ;q = w = 0;
    cin >> n;   a.resize(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0) q++;
        else w++;
    }
    if(q != 0 && w != 0){
        sort(a.begin(), a.end());
    }
    for(ll i = 0; i < n; i++) cout << a[i] << ' '; return cout << endl, 0;
}
