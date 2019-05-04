// Problem:   Interesting polygon (eolymp 3532)
// Link:      https://eolymp.com/problems/3532
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-05-04 10:04 UTC
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
    double n;
    cin >> n;
    double L, R;
    L = n / 2, R = pow2(n);
    while(abs(R - L) > 1e-11){
        double Middle = (L + R) / 2;
        double fi, i;
        for(fi = 0, i = 1; i <= n; i++){
            double angle = (2*Middle*Middle - pow2(i))/(2*Middle*Middle);
            if ((angle < -1.0) || (angle > 1.0)){
                fi = 100; break;
            }
                fi += acos(angle);
            }
        if (fi > 2*(M_PI)) L = Middle; else R = Middle;
    }
    cout << fixed << setprecision(8);
    cout << L << endl;
}
