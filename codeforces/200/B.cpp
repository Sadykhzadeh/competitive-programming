// Problem:   Drinks (Codeforces 200B)
// Link:      https://codeforces.com/contest/200/problem/B
// Rating:    800   Tags: implementation, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-15 18:28 UTC
// Verdict:   Accepted

//typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert
#define ll double

using namespace std;

#include <bits/stdc++.h>

ll t;
ll ans;

int main(){
    cin >> t;
    for(ll i = 0; i < t; i++){
        ll temp; cin >> temp; ans+=temp;
    }
    cout << fixed << setprecision(12) << (ans / (t * 100)) * 100 << endl;
}
