// Problem:   Dijkstra (eolymp 2351)
// Link:      https://eolymp.com/problems/2351
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-16 08:34 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

#define MAX 2011
#define INF LLONG_MAX
ll mas[MAX][MAX], used[MAX], d[MAX];
ll n, s, f;

void Relax(ll i, ll j){
    if(d[i] + mas[i][j] < d[j]){
        d[j] = d[i] + mas[i][j];
    }
}


int main(){
    cin >> n >> s >> f;
    memset(mas,0x3F,sizeof(mas));
    memset(used,0,sizeof(used));
    for(ll i = 1; i <= n; i++) d[i] = INF;
    d[s] = 0;
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= n; j++){
            cin >> mas[i][j];
        }
    }
    for(ll i = 1; i < n; i++){
        ll mi = INF, w(-1);
        for(ll j = 1; j <=n ; j++) if(!used[j] && d[j] < mi) {mi =  d[j]; w = j;}

        if(w < 0) break;
        for(ll j = 1; j <= n; j++){
            if(!used[j] && mas[w][j] != -1) Relax(w, j);
        }
            used[w] = 1;
    }
    if(d[f] == INF) cout << -1 << endl;
    else cout << d[f] << endl;
    return 0;
}
