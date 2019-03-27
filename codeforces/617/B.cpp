// Problem:   Chocolate (Codeforces 617B)
// Link:      https://codeforces.com/contest/617/problem/B
// Rating:    1300   Tags: combinatorics
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-27 19:25 UTC
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

ll n, k = 0;
vector <ll> a, ans;

int main(){
    cin >> n;
    for(ll i=  0; i < n; i++){
        ll temp; cin >> temp;
        a.pb(temp);
        if(temp) k++;
    }
    if(!k){
        cout << 0 << endl;
        return 0;
    }
	for(ll i = 0; i < n; i++) if(a[i]) ans.pb(i+1); k = 1;
	for(ll i = 1; i < ans.size(); i++) k*=(ans[i]-ans[i-1]);
	cout << k << endl;
    return 0;
}
