// Problem:   Polycarp's Practice (Codeforces 1006B)
// Link:      https://codeforces.com/contest/1006/problem/B
// Rating:    1200   Tags: greedy, implementation, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-26 05:50 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long
#define pb push_back

ll n, k;
vector <pair <ll, ll> > a;
vector <ll> as;

int main(){
    cin >> n >> k; ll n1=  n;
    for(ll i = 0; i < n; i++){
        ll q;
        cin >> q;
        a.pb({q,i+1});
    }
    ll cp=k;
    ll ans = 0, an = 0;
    sort(all(a));

    //cout << "as: ";
    while(k--){
        ans += a[n1-1].first;
        as.pb(a[n1-1].second);
        an += a[n1-1].second;
      //  cout << a[n1-1].second << ' ';
        n1--;
    }
    //cout << endl;
    cout << ans << endl;
    if(cp==1) return cout << n << endl, 0;
    sort(all(as));
    cout << as[0] << ' ';
    for(ll i = 1; i < as.size() - 1; i++)
    {
        cout << as[i] - as[i-1] << ' ';
    }
    ll id=as.size()-1;
    return cout <<(as[id]-as[id-1])+(n-as[id])<< endl, 0;
}
