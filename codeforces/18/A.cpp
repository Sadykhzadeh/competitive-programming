// Problem:   Triangle (Codeforces 18A)
// Link:      https://codeforces.com/contest/18/problem/A
// Rating:    1500   Tags: brute force, geometry
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-29 22:54 UTC
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
#define coutt(x) cout<<(x)<<endl;return 0;

using namespace std;

#include <bits/stdc++.h>

ll rasstPif(ll x1,ll y1,ll x2,ll y2,ll x3,ll y3){
	ll a1, b1, a2, b2, a3, b3, a4, b4, a5, b5, a6, b6;
	a1 = x1 - x2;
	b1 = y1 - y2;
	a2 = x1 - x3;
	b2 = y1 - y3;
	a3 = x2 - x1;
	b3 = y2 - y1;
	a4 = x2 - x3;
	b4 = y2 - y3;
	a5 = x3 - x1;
	b5 = y3 - y1;
	a6 = x3 - x2;
	b6 = y3 - y2;
	if(a1 * b4 == b1 * a4) return 0;
	if(a1 * a2 + b1 * b2 == 0
    || a3 * a4 + b3 * b4 == 0
    || a5 * a6 + b5 * b6 == 0) return 1;
	return 0;
}

int main(){
	ll x, x2, y, y2, x3, y3;
	cin >> x >> y >> x2 >> y2 >> x3 >> y3;
	if(rasstPif(x,y,x2,y2,x3,y3)) return cout << "RIGHT" << endl,0;
    elif(
        rasstPif(x+1,y,x2,y2,x3,y3) ||
		rasstPif(x,y+1,x2,y2,x3,y3) ||
		rasstPif(x,y,x2+1,y2,x3,y3) ||
		rasstPif(x,y,x2,y2+1,x3,y3) ||
		rasstPif(x,y,x2,y2,x3+1,y3) ||
		rasstPif(x,y,x2,y2,x3,y3+1) ||
        rasstPif(x-1,y,x2,y2,x3,y3) ||
		rasstPif(x,y-1,x2,y2,x3,y3) ||
		rasstPif(x,y,x2-1,y2,x3,y3) ||
		rasstPif(x,y,x2,y2-1,x3,y3) ||
		rasstPif(x,y,x2,y2,x3-1,y3) ||
		rasstPif(x,y,x2,y2,x3,y3-1))    return cout << "ALMOST" << endl,0;
    else  return cout << "NEITHER", 0;
	return 0;
}
