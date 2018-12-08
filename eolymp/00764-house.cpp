// Problem:   House (eolymp 764)
// Link:      https://eolymp.com/problems/764
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-08 17:56 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll m, n, a, b, k, x, y;
ll mas[5055][5055], res = 0;

int main(){
    cin >> m >> n >> a >> b >> k;
    for(ll i = 0; i < k; i++){
        scanf("%d %d",&x,&y);
        mas[x][y] = 1;
    }
    for(ll i = 1; i <= m; i++) for(ll j = 1; j <= n; j++)
        mas[i][j] = mas[i][j] + mas[i-1][j] + mas[i][j-1] - mas[i-1][j-1];
    for(ll i = 1; i <= m - a + 1; i++)
    for(ll j = 1; j <= n - b + 1; j++)
        if (mas[i+a-1][j+b-1] + mas[i-1][j-1] - mas[i-1][j+b-1] - mas[i+a-1][j-1]
            == 0) res++;
    cout << res << endl;
    return 0;
}
