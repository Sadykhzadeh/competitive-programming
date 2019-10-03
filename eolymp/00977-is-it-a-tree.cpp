// Problem:   Is it a Tree? (eolymp 977)
// Link:      https://eolymp.com/problems/977
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-10-03 06:17 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll n, c, Edges;

ll m[105][105], used[105];

void dfs(ll v){
    ll i;
    used[v] = 1; c++;
    for(i = 0; i < n; i++){
        if(m[v][i] && !used[i]) dfs(i);
    }
}

int main(){
    cin >> n; Edges = c = 0;
    for(ll i = 0 ; i < n; i++){
        for(ll j = 0; j < n; j++){
            cin >> m[i][j]; Edges += m[i][j];
        }
    }
    dfs(0); Edges /= 2;
    if((Edges == n - 1) && (c == n)) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}
