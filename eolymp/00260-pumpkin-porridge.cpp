// Problem:   Pumpkin porridge (eolymp 260)
// Link:      https://eolymp.com/problems/260
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-29 17:40 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n;
vector <ll> a;

int main(){
    cin >> n;
    for(ll i = 0 ; i < n; i++){
        ll temp;
        cin >> temp;
        a.pb(temp);
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for(ll i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}
