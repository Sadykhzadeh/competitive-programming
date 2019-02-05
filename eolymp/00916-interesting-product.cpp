// Problem:   Interesting Product (eolymp 916)
// Link:      https://eolymp.com/problems/916
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-02-05 13:29 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll a, b, c, d;
ll imin, imax, jmin, jmax;

int main(){
    cin >> a >> b >> c >> d;
    if(a < b){ imin=a; imax=b;}
    else{ imin = b; imax = a;}
    if(c < d){ jmin = c; jmax = d;}
    else{ jmin = d; jmax = c;}
    ll pmin = imin * jmin;
    ll pmax = imax * jmax;
    ll rez = 0;
        for(ll p = pmin; p <= pmax; p++){
            ll flag=0;
            for(ll i = imin; i <= imax; i++){
                    ll j = p / i;
                    if((p % i == 0) && (j >= jmin) && (j <= jmax)){flag = 1; break;}
                }
            if(flag==1) rez=rez+1;
        }
    cout << rez << endl;
    return 0;
}
