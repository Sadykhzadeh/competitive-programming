// Problem:   Lunar New Year and Cross Counting (Codeforces 1106A)
// Link:      https://codeforces.com/contest/1106/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-01-31 12:40 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n, ans(0);
char a[550][550];

int main(){
    cin >> n;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(ll i = 1; i < n - 1; i++){
        for(ll j = 1; j < n - 1; j++){
            if(a[i][j] == a[i-1][j-1] && a[i][j] == a[i-1][j+1] &&
               a[i][j] == a[i+1][j-1] && a[i][j] == a[i+1][j+1] && a[i][j] == 'X') ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
