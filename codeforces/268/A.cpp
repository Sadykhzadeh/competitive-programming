// Problem:   Games (Codeforces 268A)
// Link:      https://codeforces.com/contest/268/problem/A
// Rating:    800   Tags: brute force
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-22 18:30 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n, a[50][2], ans(0);

int main(){
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(a[i][0] == a[j][1]) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
