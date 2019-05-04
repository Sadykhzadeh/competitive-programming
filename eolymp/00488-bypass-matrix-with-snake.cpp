// Problem:   Bypass matrix with "snake" (eolymp 488)
// Link:      https://eolymp.com/problems/488
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-05-04 21:14 UTC
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
    ll n;
    cin >> n;
    ll a[100][100];
    ll cnt(1);
    for(ll i = 0; i < n; i++){
        if(i % 2 == 0){
            for(ll j = 0; j < n; j++){
                a[i][j] = cnt;
                cnt++;
            }
        }
        else{
            for(ll j = n - 1; j >= 0; j--){
                a[i][j] = cnt;
                cnt++;
            }
        }
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
