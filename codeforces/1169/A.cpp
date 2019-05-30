// Problem:   Circle Metro (Codeforces 1169A)
// Link:      https://codeforces.com/contest/1169/problem/A
// Rating:    900   Tags: implementation, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-05-30 22:00 UTC
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

int main(){
    ll n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    while(1+1 == 2){
        if(a == c) return cout << "YES" << endl, 0;
        elif(a == b || c == d) return cout << "NO" << endl, 0;
        a++; if(a > n) a = 1; c--; if(!c) c = n;
    }
}
