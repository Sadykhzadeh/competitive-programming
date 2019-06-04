// Problem:   Vasya and Wrestling (Codeforces 493B)
// Link:      https://codeforces.com/contest/493/problem/B
// Rating:    1400   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-04 12:44 UTC
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

ll n, k, ans1, ans2;
vector <ll> f, s;

int main(){     ans1 = ans2 = 0;        bool h1, h;
    F_READ;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> k;
        if(k > 0){  f.pb(k); ans1 += k; h = true; h1 = false;}
        else{   s.pb(-k);   ans2 -= k;  h1 = true; h = false;}
    }
    ll pop = min(f.size(), s.size());
    if(ans1 > ans2) return cout << "first" << endl, 0;
    elif(ans1 < ans2) return cout << "second" << endl, 0;
    else{
        for(ll i = 0; i < pop; i++){
            if(f[i] > s[i]) return cout << "first" << endl, 0;
            elif(f[i] < s[i]) return cout << "second" << endl, 0;
        }
        if(h && !h1) return cout << "first" << endl, 0;
        elif(h1 && !h) return cout << "second" << endl, 0;
    }
}
