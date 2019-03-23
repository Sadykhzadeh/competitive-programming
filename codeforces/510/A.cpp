// Problem:   Fox And Snake (Codeforces 510A)
// Link:      https://codeforces.com/contest/510/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-23 12:05 UTC
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

ll m, n;

void f1(){
    for(ll cnt = 0; cnt < m; cnt++) cout << "#";
    cout << endl;
}

void f2(){
    for(ll cnt = 0; cnt < m - 1; cnt++) cout << ".";
    cout << "#" << endl;
}

void f3(){
    cout << "#";
    for(ll cnt = 0; cnt < m - 1; cnt++) cout << ".";
    cout << endl;
}

int main(){
    F_READ;
    cin >> n >> m;
    for(ll i = 0; i < n; i++){
        if(mod(i,2) == 0) f1();
        elif(mod(i,4) == 1) f2();
        elif(mod(i,4) == 3) f3();
    }
    return 0;
}
