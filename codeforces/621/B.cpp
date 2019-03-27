// Problem:   Wet Shark and Bishops (Codeforces 621B)
// Link:      https://codeforces.com/contest/621/problem/B
// Rating:    1300   Tags: combinatorics, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-27 19:45 UTC
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

ll n, ans = 0;
ll sum[2500], raz1[2500], raz2[2500];

int main(){
    F_READ;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll temp, temp1;
        cin >> temp >> temp1;
        sum[temp+temp1]++;
        if(temp >= temp1) raz1[temp-temp1]++;
        else raz2[temp1-temp]++;
    }
    for(ll i = 0; i <= 2000; i++){
        ans += (sum[i] * (sum[i]-1))/2;
        ans += (raz1[i] * (raz1[i]-1))/2;
        ans += (raz2[i] * (raz2[i]-1))/2;
    }
    cout << ans << endl;
    return 0;
}
