// Problem:   Thylacine (eolymp 5331)
// Link:      https://eolymp.com/problems/5331
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-09 08:04 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>



ll n, g[100000];

int main(){
    cin >> n;
    for(ll i= 0; i < n; i++) cin >> g[i];
    ll maxx=-LLONG_MAX;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
      maxx=max(maxx,sum+g[i]);
      sum+=g[i];
      if(sum<0)sum=0;
    }
    cout<<maxx<<endl;

    return 0;
}
