// Problem:   Counting Ones (eolymp 6583)
// Link:      https://eolymp.com/problems/6583
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-11-15 20:23 UTC
// Verdict:   Accepted

typedef unsigned long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll function(ll x){
    ll cnt(0);
    while(x){cnt+=(x%2);x/=2;}
    return cnt;
}

ll res(ll x){
    if(x < 1) return 0;
    elif(x % 2) return 2 * res(x / 2) + (x + 1) / 2;
    else return res(x - 1) + function(x);
}

ll a, b;

int main(){
    cin >> a >> b; cout << res(b) - res(a-1) << endl;
    return 0;
}
