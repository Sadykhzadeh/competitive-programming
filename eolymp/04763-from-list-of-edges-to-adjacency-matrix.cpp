// Problem:   From list of edges to adjacency matrix (eolymp 4763)
// Link:      https://eolymp.com/problems/4763
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-12 18:08 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <set>

ll n, m, a, b;
ll g[105][105];

int main(){
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        g[a][b] = g[b][a] = 1;
    }
    for(ll i = 1; i <= n; i++){
        for(ll j = 1 ; j <= n; j++) cout << g[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
