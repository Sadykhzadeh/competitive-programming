// Problem:   Xenia and Ringroad (Codeforces 339B)
// Link:      https://codeforces.com/contest/339/problem/B
// Rating:    1000   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-22 18:03 UTC
// Verdict:   Accepted

//typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

typedef unsigned long long ll;

ll n, m, ans(0), pos(1), temp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(ll i = 0; i < m; i++){
        cin >> temp;
        if(temp >= pos){
            ans += (temp - pos);
            pos = temp;
        }
        else{
            ans += (n - pos + temp);
            pos = temp;
        }
    }
    cout << ans << endl;
    return 0;
}
