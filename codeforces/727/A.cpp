// Problem:   Transformation: from A to B (Codeforces 727A)
// Link:      https://codeforces.com/contest/727/problem/A
// Rating:    1000   Tags: brute force, dfs and similar, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-29 16:44 UTC
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
#define coutt(x) cout<<(x)<<endl;return 0;

using namespace std;

#include <bits/stdc++.h>

ll a, b;
vector <ll> vec;

int main(){
    F_READ;
    cin >> a >> b;
    while(a != b){
        if(b < a) return cout << "NO", 0;
        vec.pb(b);
        if(b % 10 == 1){
            b/=10; continue;
        }
        if(b % 2 == 0){
            b/=2; continue;
        }
        return cout << "NO", 0;
    }
    vec.pb(a);
    reverse(vec.begin(), vec.end());
    cout << "YES" << endl << vec.size() << endl;
    for(ll i = 0; i < vec.size(); i++) cout << vec[i] << " "; cout << endl;
}
