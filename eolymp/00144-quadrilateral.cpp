// Problem:   Quadrilateral (eolymp 144)
// Link:      https://eolymp.com/problems/144
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-12 20:33 UTC
// Verdict:   Accepted

//typedef long long ll;
#define FAST_READ ios_base::sync_with_stdio(false)
#define elif else if
#define pb push_back
#define ins insert
#define ll double

using namespace std;

#include <bits/stdc++.h>

int ans(ll a, ll b, ll c, ll d){ ll hello_world = a*c + b*d; return hello_world;}

vector <ll> x, y;
ll za, zaq;
ll output(0);

int main(){
    for(ll i = 0; i < 4; i++){cin >> za >> zaq; x.pb(za); y.pb(zaq);}
    x.pb(x[0]); x.pb(x[1]); y.pb(y[0]); y.pb(y[1]);
    for(ll i = 0; i < 4; i++) if(ans(x[i+1] - x[i], y[i+1] - y[i],x[i+2] - x[i+1], y[i+2] - y[i+1]) == 0) output++;
    cout << output << endl;
    return 0;
}
