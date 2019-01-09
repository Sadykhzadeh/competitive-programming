// Problem:   Doors Breaking and Repairing (Codeforces 1102C)
// Link:      https://codeforces.com/contest/1102/problem/C
// Rating:    1200   Tags: games
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-01-09 16:36 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll cnt = 0;
ll n, x, y, temp;
vector <ll> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> x >> y;
    for(ll i = 0; i < n; i++){cin >> temp; a.pb(temp);}
    if(x > y){cout << n << endl;return 0;}
    else{
        for(ll i= 0; i < n; i++){
            if(a[i] <= x) cnt++;
        }
        if(cnt % 2 == 0) cout << cnt / 2 << endl;
        else cout << cnt / 2+ 1 << endl;
    }
    return 0;
}
/*
int main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> x >> y;
    for(ll i = 0; i < n; i++){cin >> temp; a.pb(temp);}
    for(ll j = 0; j < 10000; j++){
        ll maxxi = 999999999, k;
        for(ll i = 0 ; i < n; i++){
            if(maxxi > a[i] && a[i] != 0){maxxi = a[i]; k = i;}
        }
        //if(x >= y){
            if(a[k] - x >= 0) a[k] = a[k] - x; else a[k] = 0;
        //}
        if(a[k] != 0) a[k] += y;
        else{
            ll maxxi = 999999999, k;
            for(ll i = 0 ; i < n; i++){
                if(maxxi > a[i] && a[i] != 0){maxxi = a[i]; k = i;}
            }
            if(a[k] != 0) a[k] += y;
        }
    }
    for(ll i = 0 ; i < n; i++){
        if(a[i] == 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
*/
