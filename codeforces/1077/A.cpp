// Problem:   Frog Jumping (Codeforces 1077A)
// Link:      https://codeforces.com/contest/1077/problem/A
// Rating:    800   Tags: math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-28 13:28 UTC
// Verdict:   Accepted

typedef long long ll;
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

using namespace std;

#include <bits/stdc++.h>

ll t, a, b, k;

int main(){
    F_READ;
    cin >> t;
    while(t--){
        cin >> a>> b >> k;
        if(k % 2 == 0){
            cout << (k/2)*(a-b) << endl;
        }
        else cout << ((k-1)/2)*(a-b) + a << endl;
    }
    return 0;
}
