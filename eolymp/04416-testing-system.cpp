// Problem:   Testing System (eolymp 4416)
// Link:      https://eolymp.com/problems/4416
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-30 18:42 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

struct person{
    ll id, pt, pr;
} *acm;

int f(person a, person b){
    if(a.pr != b.pr) return a.pr > b.pr;
    if(a.pt != b.pt) return a.pt < b.pt;
    return a.id < b.id;
}

ll n;

int main(){
    cin >> n;   acm = new person[n];
    for(ll i = 0; i < n; i++){
        cin >> acm[i].pr >> acm[i].pt;
        acm[i].id = i + 1;
    }
    sort(acm, acm + n, f);
    for(ll i = 0; i < n; i++){
        if(i) cout << ' '; cout << acm[i].id;
    }
    cout << endl;
    delete[] acm;
    return 0;
}
