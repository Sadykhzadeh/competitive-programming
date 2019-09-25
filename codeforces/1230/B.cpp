// Problem:   Ania and Minimizing (Codeforces 1230B)
// Link:      https://codeforces.com/contest/1230/problem/B
// Rating:    1000   Tags: greedy, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-25 09:54 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, k;
    string s;
    cin >> n >> k >> s;
    if(k == 0) return cout << s << endl, 0;
    if(n == 1) return cout << 0 << endl, 0;
    for(ll i = 0; i < n && k; i++){
        if(i == 0 && s[i] != '1'){s[i] = '1';k--; continue;}
        if(s[i] != '0' && i){s[i] = '0'; k--;}
    }
    cout << s << endl;
    return 0;
}
