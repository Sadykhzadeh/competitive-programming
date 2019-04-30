// Problem:   Square root (eolymp 3968)
// Link:      https://eolymp.com/problems/3968
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-30 18:30 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq(x)  cout << (#x) << " = " << (x) << endl
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

double f(double x){
    return  x * x + sqrt(x);
}

int main(){
    F_READ;
    double c;
    cin >> c;
    double left(0), right(c), y, middle;
    while(right - left > 1e-10){
        middle = (left + right) / 2;
        y = f(middle);
        if(y > c) right = middle; else left = middle;
    }
    return cout << fixed << setprecision(9) << left << endl, 0;
}
