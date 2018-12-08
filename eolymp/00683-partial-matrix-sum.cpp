// Problem:   Partial matrix sum (eolymp 683)
// Link:      https://eolymp.com/problems/683
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-08 17:29 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll n, m, kek;
ll mas[1011][1011];

int main(){
    //ios_base::sync_with_stdio(false);
    memset(mas,0,sizeof(mas));
    //cin >> n >> m;
    scanf("%d %d",&n,&m);
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= m; j++){
            scanf("%d", &kek);
            mas[i][j] = mas[i][j-1] + mas[i-1][j] - mas[i-1][j-1] + kek;
            printf("%d ",mas[i][j]);
        }
        cout << '\n';
    }
    return 0;
}
