// Problem:   EOlymp 3835
// Link:      https://eolymp.com/problems/3835
// Language:  C++
// Submitted: 2020-01-11 08:05 UTC
// Verdict:   Accepted

typedef long long ll;
typedef unsigned long long ull;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/
#define qq2(x,y) cerr << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define qq(x) cerr << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((x) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define line cerr << endl << endl << "========================" << endl
#define COUT(x) return cout << (x) << endl, 0;
#define stop return 0
using namespace std;
#include <bits/stdc++.h>
ll T1 = clock();
void timer(){rus_lang; ll T2(clock());cerr<<"Время: "<<(T2-T1)/1000.<<" секунд."<<endl;
cerr << "Автор: Азер Садыхзаде" << endl;}
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#define endl "\n"
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
using namespace std;
ll m, n;
vector< tuple <ll, ll, ll> > g(m);

ll val = 0;
vector <pair<ll, ll> >ans;

int main(){
    F_READ;
    cin >> m >> n;
    for(ll i = 0; i < m; i++){
        ll q, w, e;
        cin >> q >> w >> e;
        q--; w--;
        g.pb({e,q,w});
        g.pb({e,w,q});
    }
    sort (g.begin(), g.end());
    vector<ll> tree_id (n);
    for(ll i = 0; i < n; i++) tree_id[i] = i;
    for(ll i = 0; i < m; i++){
        ll a = get<1>(g[i]), b = get<2>(g[i]), l = get<0>(g[i]);
        if(tree_id[a] != tree_id[b]){
            val += l;
            ans.pb({a,b});
            ll old_id = tree_id[b],  new_id = tree_id[a];
            for(ll j = 0; j < n; j++) if(tree_id[j] == old_id) tree_id[j] = new_id;
        }
    }
    cout << val << endl;
    timer();
    stop;
}
