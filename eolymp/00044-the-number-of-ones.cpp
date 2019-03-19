// Problem:   The number of ones (eolymp 44)
// Link:      https://eolymp.com/problems/44
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-03-19 07:48 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007

using namespace std;

#include <bits/stdc++.h>

ll n, i, j, res[5500];

int main(){
    cin >> n; res[1] = 1;
    for(i = 2; i <= n; i++){
        res[i] = i;
        for(j = 1; 2 * j < i; j++) if(res[j] + res[i-j] < res[i]) res[i] = res[j] + res[i-j];
        for(j = 2; j * j <= i; j++) if(i % j == 0) if(res[j] + res[i/j] < res[i])
                            res[i] = res[j] + res[i/j];
    }
    cout << res[n];
    return 0;
}
