// Problem:   Sum of odd numbers (eolymp 2861)
// Link:      https://eolymp.com/problems/2861
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-07 12:06 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll a, b, ans(0);

int main(){
    cin >> a >> b;
    if(a % 2 == 0) a++;
    for(ll i = a; i <= b; i+=2){
        ans+=i;
    }
    cout << ans << endl;
    return 0;
}
