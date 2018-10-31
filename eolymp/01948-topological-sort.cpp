// Problem:   Topological Sort (eolymp 1948)
// Link:      https://eolymp.com/problems/1948
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-31 20:32 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>

ll m, n, error(0);
vector < vector <ll>> g;
vector <ll> used, top;

void dfs(ll i){
    used[i] = 1;
    for(ll j = 0; j < g[i].size(); j++){
        ll to = g[i][j];
        if(used[to] == 1) error = 1;
        if(!used[to]) dfs(to);
    }
    used[i] = 2;
    top.pb(i);
}

int main(){
    cin >> n >> m;
    g.resize(n+1); used.resize(n+1);
    for(ll i = 0; i < m; i++){
        ll temp, temp1;
        cin >> temp >> temp1;
        g[temp].pb(temp1);
    }
    for(ll i = 1; i <= n; i++) if(!used[i]) dfs(i);
    if(error == 1){cout << -1; return 0;}
    for(ll i = n - 1; i >= 0; i--) cout << top[i] << ' ';
    cout << endl;
    return 0;
}
