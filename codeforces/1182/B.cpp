// Problem:   Plus from Picture (Codeforces 1182B)
// Link:      https://codeforces.com/contest/1182/problem/B
// Rating:    1300   Tags: dfs and similar, implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-11 21:28 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> Azer_Sadykhzadeh
Programming Language: C++
*/
#define qq2(x,y) cout << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007

//#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;

#include <bits/stdc++.h>

char a[520][520];
vector < pair <ll, ll > > pos;

int main(){
    ll n, m, zv(0);
    cin >> n >> m;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> a[i][j]; if(a[i][j] == '*') zv++;
        }
    }
    ll cnt = 0;
    for(ll i = 1; i < n - 1; i++){
        for(ll j = 1; j < m - 1; j++){
            if(a[i-1][j] == a[i+1][j] && a[i+1][j] == a[i][j-1]
               && a[i][j-1] == a[i][j+1] && a[i][j+1] == a[i][j] && a[i][j] == '*'
               ){
                       //cout << "YOOOHOO" << i << ' ' << j << endl;
                        cnt++;
                        pos.pb({i,j});
               }
        }
    }
    if(cnt == 1){
            ll h, k, h1, k1;
    h = pos[0].first, k = pos[0].second;    h1 = h, k1 = k;
        while(a[h1+1][k1] == '*'){h1++;zv--;/*qq(1);*/}  h1 = h, k1 = k;
        while(a[h1-1][k1] == '*'){h1--;zv--;/*qq(2);*/}  h1 = h, k1 = k;
        while(a[h1][k1-1] == '*'){k1--;zv--;/*qq(3);*/}  h1 = h, k1 = k;
        while(a[h1][k1+1] == '*'){k1++;zv--;/*qq(4);*/}//cout << zv << endl;
        if(zv == 1) return cout << "YES" << endl, 0;
        else return cout << "NO" << endl, 0;
    }
    else cout << "NO" << endl, 0;
}
