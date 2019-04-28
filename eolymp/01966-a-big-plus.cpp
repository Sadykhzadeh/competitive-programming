// Problem:   A big plus (eolymp 1966)
// Link:      https://eolymp.com/problems/1966
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-28 12:31 UTC
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

ll n;

int main(){
    F_READ;
    cin >> n;
    for(ll i = 0; i < n*2 + 1; i++){
        if(i != n){
            for(ll j = 0; j < n* 2 + 1; j++){
                if(j != n) cout << '.'; else cout << "*";
            }
        }
        else{
            for(ll j = 0; j < n * 2 + 1; j++) cout << "*";
        }
        cout << endl;
    }
    return 0;
}
