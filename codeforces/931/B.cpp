// Problem:   World Cup (Codeforces 931B)
// Link:      https://codeforces.com/contest/931/problem/B
// Rating:    1200   Tags: constructive algorithms, implementation
// Language:  C++17 (GCC 7-32)
// Submitted: 2020-02-15 07:28 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define qq(x) cerr << (#x) << " = " << (x) << endl

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n, a, b;
    cin >> n >> a >> b;
    if(a > b) swap(a,b);
    ll i = 1;
    while( abs(a - b) >= 1) {
        if(abs(a - b) == 1 && a % 2 == 1 && b % 2 == 0) break;
        if(a != 1) a = (a + a % 2) / 2;
        if(b != 1) b = (b + b % 2) / 2;
        qq(a); qq(b);
        i++;
    }
    qq(n);
    if(log2(n) == i) cout << "Final!" << endl;
    else cout << i << endl;
    return 0;
}
