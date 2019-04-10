// Problem:   Regular Bracket Sequence (Codeforces 1132A)
// Link:      https://codeforces.com/contest/1132/problem/A
// Rating:    1100   Tags: greedy, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-10 09:43 UTC
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

ll a,b,c,d;

int main(){
    F_READ;
    cin >> a >> b >> c >> d;
    if(a==d){
        if(a!=0)
            return cout << 1 << endl, 0;
        else{
            if(c==0) return cout << 1 << endl, 0;
            else return cout << 0 << endl, 0;
        }
    }
    else return cout << 0 << endl, 0;
}
