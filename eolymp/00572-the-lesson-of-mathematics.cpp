// Problem:   The Lesson of Mathematics (eolymp 572)
// Link:      https://eolymp.com/problems/572
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-03-29 15:42 UTC
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
vector < pair <ll , ll> > a;

ll pros(ll x){
    if(x >= 1 && x <= 3) return 1;
    ll i;
    for(i = 2; i < x/2; i++){
        if(x % i == 0) break;
    }
    if(x % i == 0) return -1;
    else return 1;
}

int main(){
    cin >> n;
    if(pros(n) == 1){
        cout << n << endl; return 0;
    }
    for(ll i = 2; i <= n; i++){
        if(n == 1 ) break;
        ll temp(-1), temp1(0);
        while(n % i == 0){
            temp = i; n/=i; temp1++;
        }
        if(temp == -1) continue;
        a.pb({temp, temp1});
    }
    sort(a.begin(), a.end());
  //  cout << a[0].first << " " << a[0].second << endl;
  //  cout << a[1].first << " " << a[1].second << endl;
    for(ll i = 0; i < a.size(); i++){
        cout << a[i].first;
        if(a[i].second != 1) cout << "^" << a[i].second;
        if(i != a.size() - 1) cout << "*";
    }
    cout << endl;
    return 0;
}
