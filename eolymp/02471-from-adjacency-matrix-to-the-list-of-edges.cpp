// Problem:   From adjacency matrix to the list of edges (eolymp 2471)
// Link:      https://eolymp.com/problems/2471
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-12 18:07 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <set>

ll n;
ll a[109][109];
set <ll> a1;

int main(){
    cin >> n;
    for(ll i = 0; i < n;i++) for(ll j = 0; j <n; j++) {cin >> a[i][j]; if(i < j && a[i][j]) cout << i+1 << ' ' << j+1 << endl;}
    return 0;
}
