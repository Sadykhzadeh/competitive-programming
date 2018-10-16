// Problem:   Knight move (eolymp 4021)
// Link:      https://eolymp.com/problems/4021
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-16 06:33 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll m , n, dp[60][60];

int main(){
    cin >> n >> m;
    dp[1][1] = 1;
    for(ll i = 2; i <= n; i++){
        for(ll j = 2; j <= m; j++){
            dp[i][j] = dp[i-2][j-1] + dp[i-1][j-2];
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}
