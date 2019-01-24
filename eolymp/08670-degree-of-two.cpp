// Problem:   Degree of two (eolymp 8670)
// Link:      https://eolymp.com/problems/8670
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-24 19:25 UTC
// Verdict:   Accepted

typedef long long ll;
#define FAST_READ ios_base::sync_with_stdio(false)
#define elif else if
#define pb push_back
#define ins insert
//#define ll double

using namespace std;

#include <bits/stdc++.h>

ll n;
vector <ll> a;

int main(){
    cin >> n;
    ll i = 1;
    while(i <= n){
        if(i == n) break;
        else{
            i*=2;
        }
    }
    if(i == n) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
