// Problem:   Dreamoon and Stairs (Codeforces 476A)
// Link:      https://codeforces.com/contest/476/problem/A
// Rating:    1000   Tags: implementation, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-10 09:01 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll a, b;

int main(){
    cin >> a >> b;
    if(b > a) cout << -1 << endl;
    elif(a == b) cout << a << endl;
    else{
        ll cnt = a / 2;
        if(a % 2 != 0) cnt++;
        while(cnt % b != 0) cnt++;
        cout << cnt << endl;
    }

    return 0;
}
