// Problem:   Odd Sum Segments (Codeforces 1196B)
// Link:      https://codeforces.com/contest/1196/problem/B
// Rating:    1200   Tags: constructive algorithms, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-07-24 15:55 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/

using namespace std;

#include <bits/stdc++.h>

int main(){
    ll q, *a, n, ALA_TI_KTO_TAKOY_DAVAY_DO_SVIDANIYA, DAVAY_IDI_GULAY_DA_SVIDANIYASIHDAHDKJASH;
    cin >> q;
    while(q --){
        DAVAY_IDI_GULAY_DA_SVIDANIYASIHDAHDKJASH = 0;
        cin >> n >> ALA_TI_KTO_TAKOY_DAVAY_DO_SVIDANIYA;
        a = new ll[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] % 2)
                DAVAY_IDI_GULAY_DA_SVIDANIYASIHDAHDKJASH++;
        }
        if( DAVAY_IDI_GULAY_DA_SVIDANIYASIHDAHDKJASH < ALA_TI_KTO_TAKOY_DAVAY_DO_SVIDANIYA || ( DAVAY_IDI_GULAY_DA_SVIDANIYASIHDAHDKJASH > ALA_TI_KTO_TAKOY_DAVAY_DO_SVIDANIYA && ( ALA_TI_KTO_TAKOY_DAVAY_DO_SVIDANIYA - DAVAY_IDI_GULAY_DA_SVIDANIYASIHDAHDKJASH ) % 2 )){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        ALA_TI_KTO_TAKOY_DAVAY_DO_SVIDANIYA--;
        for (ll i = 0; i < n - 1, ALA_TI_KTO_TAKOY_DAVAY_DO_SVIDANIYA; i++)
            if(a[i] % 2){
                ALA_TI_KTO_TAKOY_DAVAY_DO_SVIDANIYA--;
                cout << i + 1 << " ";
            }
        cout << n << endl;
    }
    return 0;
}
