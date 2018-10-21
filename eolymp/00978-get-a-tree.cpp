// Problem:   Get a tree (eolymp 978)
// Link:      https://eolymp.com/problems/978
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-21 21:20 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll g[105][105], used[105];

ll n, m, a, b;

void dfs(ll v){
    used[v] = 1;
    for(ll i = 1; i <= n; i++) if(g[v][i] && !used[i]){
        cout << v << ' ' << i << endl;
        dfs(i);
    }
}

int main(){
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        g[a][b] = g[b][a] = 1;
    }
    dfs(1);
    return 0;
}
