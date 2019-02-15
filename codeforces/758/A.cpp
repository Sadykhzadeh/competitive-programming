// Problem:   Holiday Of Equality (Codeforces 758A)
// Link:      https://codeforces.com/contest/758/problem/A
// Rating:    800   Tags: implementation, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-15 18:19 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll t, temp;
ll a[1000099];

int main(){
    cin >> t;
    if(t == 1){cin >> temp; cout << 0 << endl; return 0;}
    else{
        for(ll i = 0; i < t; i++){
            cin >> a[i];
        }
        ll maxi = -1;
        for(ll i = 0; i < t; i++){
            if(maxi < a[i]) maxi = a[i];
        }
        ll ans(0);
        for(ll i = 0; i < t; i++){
            ans += (maxi - a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
