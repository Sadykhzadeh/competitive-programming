// Problem:   Nastya Is Playing Computer Games (Codeforces 1136B)
// Link:      https://codeforces.com/contest/1136/problem/B
// Rating:    1000   Tags: constructive algorithms, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-12 13:03 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)

using namespace std;

#include <bits/stdc++.h>

ll a, b, ans(0);

ll k(ll a,ll b){if(b + b != a && a / 2 < b) return a - b + 1; else return -1;}

ll kok(ll a, ll b){
        if(b + b != a && a / 2 < b) b = a - b + 1;
        return a + b;
}
int main(){
    cin >> a >> b;
    ans += 2*a - 1;
    if(b != 1 && b != a) ans += min(b - 1, a - b);
    //cout << ans << " " << kok(a,b) << endl;
    ans += kok(a,b);
    if( k(a,b) != -1) b = k(a,b);
    //cout << ans << endl;
    cout << ans - b + 1<< endl;
    return 0;
}
