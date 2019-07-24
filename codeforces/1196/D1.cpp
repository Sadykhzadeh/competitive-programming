// Problem:   RGB Substring (easy version) (Codeforces 1196D1)
// Link:      https://codeforces.com/contest/1196/problem/D1
// Rating:    1500   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-07-24 16:04 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/
#include <bits/stdc++.h>
using namespace std;

string ONEONEONEONEONEONEONEONEONE="RGB", TWO2222222222222OJDKSLAJDAKL="GBR", SRIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII="BRG";

ll cnt(string ONEONEONEONEONEONEONEONEONE,string TWO2222222222222OJDKSLAJDAKL){
    ll res=0;
    for(ll i=0;i<(ll)ONEONEONEONEONEONEONEONEONE.size();i++){
        if(ONEONEONEONEONEONEONEONEONE[i]!=TWO2222222222222OJDKSLAJDAKL[i%3])res++;
    }
    return res;
}



int main(){
    ll TEST; cin >> TEST;
    while(TEST--){ll n, k;string s;cin >> n >> k;cin >> s;ll ans = n;for(ll i = 0; i <= n - k ; i++){
        string PIZzpiZPIZPIpizpiZPIpizPpziZIpizPIZI = s.substr(i,k);
        ans = min(ans,min(cnt(PIZzpiZPIZPIpizpiZPIpizPpziZIpizPIZI,ONEONEONEONEONEONEONEONEONE),min(cnt(PIZzpiZPIZPIpizpiZPIpizPpziZIpizPIZI,TWO2222222222222OJDKSLAJDAKL),cnt(PIZzpiZPIZPIpizpiZPIpizPpziZIpizPIZI,SRIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII))));
    }
    cout << ans << endl;}
    return 0;
}
