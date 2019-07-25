// Problem:   Winner (Codeforces 2A)
// Link:      https://codeforces.com/contest/2/problem/A
// Rating:    1500   Tags: hashing, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-07-25 19:04 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/
using namespace std;
#include <bits/stdc++.h>

map <string , ll> a, b;
ll c[1100]; string d[1100];
ll m, n,i;

int main(){
    m = i = 0;
    cin >> n;
    for(i = 1; i <= n; i++){
        cin >> d[i] >> c[i];
        a[d[i]] += c[i];
    }
    for(i = 1; i <= n; i++) m = max(m, a[d[i]]);
    for(i = 1; a[d[i]] < m || (b[d[i]] += c[i]) < m; i++);
    return cout << d[i] << endl, 0;
}
