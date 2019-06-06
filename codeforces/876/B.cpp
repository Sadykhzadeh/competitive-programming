// Problem:   Divisiblity of Differences (Codeforces 876B)
// Link:      https://codeforces.com/contest/876/problem/B
// Rating:    1300   Tags: implementation, math, number theory
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-06 13:20 UTC
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

ll mas[100099], res[100099];

int main(){ 
    F_READ;
    ll m, n, k;
    cin >> n >> m >> k;
    
    for(ll i = 0; i < n; i++){
            cin >> mas[i];
            res[mas[i]%k]++;
    }
    for(ll i = 0; i < k; i++){
        if(res[i] >= m){
            res[i] = m;
            cout << "Yes" << endl;
            for(ll j = 0; j < n; j++){
                if(mas[j] % k == i && res[i] > 0){
                    cout << mas[j] << ' '; res[i]--;
                }
            }
            return cout << endl, 0;
        }
    }
    return cout << "No" << endl, 0;
}
