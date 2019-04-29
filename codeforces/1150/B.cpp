// Problem:   Tiling Challenge (Codeforces 1150B)
// Link:      https://codeforces.com/contest/1150/problem/B
// Rating:    900   Tags: greedy, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-29 16:27 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq(x)  cout << (#x) << " = " << (x) << endl
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

int main(){
    ll n;
    cin >> n;
    char a[80][80];
    ll kolvo(0);
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < n; j++){
            cin >> a[i][j];
            if(a[i][j] == '.')kolvo++;
    }
    for(ll i = 1; i < n - 1; i++)
    for(ll j = 1; j < n - 1; j++){
        if(a[i][j] == '.')
            if(a[i][j - 1] == '.' && a[i + 1][j] == '.' && a[i][j + 1] == '.' && a[i - 1][j] == '.' && i + 1 < n && j + 1 < n)
                a[i][j - 1] = a[i + 1][j] = a[i][j + 1] = a[i - 1][j] = a[i][j] = '#';

    }
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < n; j++)
            if(a[i][j] == '.'){
                return cout << "NO" << endl, 0;
            }
    return cout << "YES" << endl, 0;
}
