// Problem:   CodeChef CHFAR
// Link:      https://www.codechef.com/problems/CHFAR
// Language:  C++(gcc 6.3)
// Submitted: 2019-05-28 19:04 UTC
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

int main() {
	ll t;
	cin >> t;
	while(t--){
	    ll n, f, count(0);
	    cin >> n;
	    ll a[1099];
	    for(ll i = 0; i < n; i++){
	        cin >> a[i];
	    }
	    cin >> f;
	    ll b[1099];
	    for(ll i = 0; i < f; i++){
	        cin >> b[i];
	    }
	    
	    int j = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] == b[j]){
                j++;
                if(j == f) return cout << "Yes" << endl, 0;
            }
        }	    
	    
	    if(j==f) return cout << "Yes" << endl, 0;
	    return cout << "No" << endl, 0;
	}
}
