// Problem:   Complete graph (eolymp 3987)
// Link:      https://eolymp.com/problems/3987
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-21 21:35 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll n, m, a, b, g[105][105];
bool flag = true;

int main(){
    cin >> n >> m;
    for(ll i = 0; i < m; i++){
        cin >> a >> b;
        g[a][b] = g[b][a] = 1;
    }
    for(ll i = 1 ; i <= n; i++){
        for(ll j = i + 1; j <= n; j++){
            if(!g[i][j]){flag = false; break;}
        }
    }
    if(flag) cout << "YES";else cout << "NO"; cout << endl;
    return 0;
}
