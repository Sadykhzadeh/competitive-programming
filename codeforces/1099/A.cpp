// Problem:   Snowball (Codeforces 1099A)
// Link:      https://codeforces.com/contest/1099/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-01-05 16:59 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll h, w, h1, w1, h2, w2;

int main(){
    cin >> w >> h;
    cin >> w1 >> h1;
    cin >> w2 >> h2;
    while(h){
        w += h;
        if(h == h1) w -= w1;
        elif(h == h2) w -= w2;
       // cout << w << endl;
        if(w < 0) w = 0;
        h--;
    }
    cout << w << endl;
    return 0;
}
