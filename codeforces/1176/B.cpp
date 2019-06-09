// Problem:   Merge it! (Codeforces 1176B)
// Link:      https://codeforces.com/contest/1176/problem/B
// Rating:    1100   Tags: math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-09 14:44 UTC
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

ll n;

int main(){
    cin >> n;
    while(n--){
        ll t;
        cin >> t;       ll ost1, ost2, ost3; ost1 = ost2 = ost3 = 0;
        vector <ll> a; a.resize(t);
        for(ll i = 0; i < t; i++){
            cin >> a[i];
            if(a[i] % 3 == 0) ost3++;
            if(a[i] % 3 == 1) ost1++;
            if(a[i] % 3 == 2) ost2++;
        }
        //qq(min(ost1, ost2));    qq((ost1 - min(ost1, ost2)) % 3);
        //qq((ost2 - min(ost1, ost2)) % 3);
        cout << ost3 + min(ost1, ost2) + (ost1 - min(ost1, ost2)) / 3
                    + (ost2 - min(ost1, ost2)) / 3 << endl;
    }
}
