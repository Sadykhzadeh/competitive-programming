// Problem:   Euclid Problem (eolymp 1155)
// Link:      https://eolymp.com/problems/1155
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-05-15 07:35 UTC
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

ll a, b, x, y, d;

void gcd2(ll a, ll b, ll *x, ll *y, ll *d){
    if(b == 0){
        *d = a; *x = 1; *y = 0;
        return;
    }
    gcd2(b,a % b,x,y,d);
    ll s = *y;
    *y = *x - (a / b) * (*y);
    *x = s;
}

int main(){
    while(scanf("%lld %lld", &a, &b) == 2){
        gcd2(a,b,&x,&y,&d);
        cout << x << ' ' << y << ' ' << d << endl;
    }
    return 0;
}
