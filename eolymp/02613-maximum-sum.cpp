// Problem:   Maximum sum (eolymp 2613)
// Link:      https://eolymp.com/problems/2613
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-08 23:02 UTC
// Verdict:   Accepted

//typedef long long ll;
typedef int ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll table[505][505] = {0}, n, maxi, t(0);

int main(){
    ios_base::sync_with_stdio(false);
    scanf("%d", &n);
    for (ll i = 1; i <= n; i++){
        for (ll j = 1; j <= n; j++){
            scanf("%d",&table[i][j]);
        }
    }
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= n; j++){
            table[i][j] = table[i - 1][j] + table[i][j];
        }
    }
    for (ll i = 1; i <= n; i++){
        for (ll j = i; j <= n; j++){
            t = 0;
            for (ll k = 1; k <= n; k++){
                t += (table[j][k] - table[i-1][k]);
                if (t < 0) t = 0;
                if (t > maxi) maxi = t;
            }
        }
    }
    printf("%d\n", maxi);
    return 0;
}
