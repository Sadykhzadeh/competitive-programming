// Problem:   Team Olympiad (Codeforces 490A)
// Link:      https://codeforces.com/contest/490/problem/A
// Rating:    800   Tags: greedy, implementation, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-22 13:27 UTC
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

ll n, temp;
vector <ll> a;
vector <ll> b;
vector <ll> c;

int main(){
    cin >> n;
    for(ll i=  0; i < n; i++){
        cin >> temp;
        if(temp == 1) a.pb(i);
        elif(temp == 2) b.pb(i);
        elif(temp == 3) c.pb(i);
    }
    if(a.size() == 0 || b.size() == 0 || c.size() == 0){
        cout << 0 << endl;
        return 0;
    }
    else{
            ll ans = min3(a.size(), b.size(), c.size());
        cout << ans << endl;
        for(ll i = 0; i < ans; i++){
            cout << a[i] + 1 << " " << b[i] + 1 <<  " " << c[i] + 1 << endl;
        }
    }
    return 0;
}
