// Problem:   Big array of Dino (eolymp 9639)
// Link:      https://eolymp.com/problems/9639
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2020-03-09 08:53 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

vector < pair <ll, ll> > a;

bool f(pair <ll, ll> a, pair <ll, ll> b){
    if(a.second == b.second) a.first < b.first;
    return a.second < b.second;
}

void lol(){
    cerr << endl;
    for(ll i = 0; i < a.size(); i++){
        cerr << a[i].first << " " << a[i].second << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n, k;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll q, w;
        cin >> q >> w;
        a.pb({q,w});
    }
    sort(a.begin(), a.end(), f);lol();
    cin >> k;
    ll i;
    for(i = 0; i < a.size() && k; i++){
        if(a[i].first <= k){ k -= a[i].first;}
        else return cout << a[i].second << endl, 0;
        if(k <= 0) return cout << a[i].second << endl, 0;
    }
    return 0;
}
