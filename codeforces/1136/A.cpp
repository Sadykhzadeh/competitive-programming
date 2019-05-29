// Problem:   Nastya Is Reading a Book (Codeforces 1136A)
// Link:      https://codeforces.com/contest/1136/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-05-29 21:21 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq2(x,y) cout << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007

#include <bits/stdc++.h>

using namespace std;

vector < pair <ll, ll> > a;
ll n, s;

int main(){
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll z, x;
        cin >> z >> x;
        a.pb({z, x});
    }
    cin >> s; ll j;
    for(ll i = 0; i < n; i++){
        if(a[i].first <= s && s <= a[i].second){
            j = i; break;
        }
    }
    return cout << abs(n - j) << endl, 0;
}
