// Problem:   Price labels (eolymp 2661)
// Link:      https://eolymp.com/problems/2661
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-02 09:06 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;
#include<bits/stdc++.h>

ll m, n, temp;
set <ll> a;

int main(){
    cin >> m;
    for(ll i = 0; i < m; i++){cin >> temp; a.insert(temp);}
    cin >> n;
    for(ll i = 0; i < n; i++){cin >> temp; a.insert(temp);}
    for(set<ll>::iterator i=a.begin(); i != a.end(); i++){cout <<*(i)<< ' ';}
    return 0;
}
