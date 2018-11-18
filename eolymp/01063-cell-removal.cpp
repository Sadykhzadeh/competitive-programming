// Problem:   Cell removal (eolymp 1063)
// Link:      https://eolymp.com/problems/1063
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-18 14:52 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll m,n,ans(0);
char a[105][105];

void dfs(ll i, ll j){
    if(i >= m || j >= n || i < 0 || j < 0) return;
    if(a[i][j] == '.') return;
    a[i][j] = '.';
    dfs(i+1,j); dfs(i-1,j);
    dfs(i,j+1); dfs(i,j-1);
}

int main(){
    cin >> m >> n;
    for(ll i = 0 ; i < m; i++){
        for(ll j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(ll i = 0 ; i < m; i++){
        for(ll j = 0; j < n; j++){
            if(a[i][j] == '#'){
                dfs(i,j);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
