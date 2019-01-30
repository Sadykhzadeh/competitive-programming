// Problem:   Maxim Buys an Apartment (Codeforces 854B)
// Link:      https://codeforces.com/contest/854/problem/B
// Rating:    1200   Tags: constructive algorithms, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-01-30 22:30 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n, k, res(0);

int main(){
    cin >> n >> k;
    if(k==0 || k==n){
        cout << 0 << " " << 0 << endl;
        return 0;
    }
    if(n%3==0){
        if(n / 3 == k)
            res = n - k;
        else if(k > n / 3)
            res = n - k;
        else
            res = k * 2;
    }
    if(n % 3 == 1){
        if( k < n / 3 || k == n / 3 )
            res = k * 2;
        else if(k + 1 == n / 3)
            res = k * 2 - 1;
        else
            res = n - k;
    }
    if(n % 3 == 2){
        if(k < n / 3 || k == n / 3)
            res = k * 2;
        else if(k + 1 == n / 3)
            res = k * 2 - 1;
        else
            res = n - k;
    }
    cout << 1 << " " << res << endl;
    return 0;
}
