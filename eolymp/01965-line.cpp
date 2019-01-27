// Problem:   Line (eolymp 1965)
// Link:      https://eolymp.com/problems/1965
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-27 20:58 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n;
vector <ll> a;
ll s;

int main(){
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> s;
        a.pb(s);
    }
    cin >> s;
    ll i = 0;
    while(a[i] >= s){ i++;/*
    cout << "Case #" << i << endl;
    for(ll j = 0; j < i; j++) cout << a[j] << ' ';
    cout << s << ' ';
    for(ll j = i; j < a.size(); j++) cout << a[j] << ' ';
    cout << endl;
    */
    }
    cout << i + 1 << endl;
    return 0;
}
