// Problem:   Egyptian symbols (eolymp 186)
// Link:      https://eolymp.com/problems/186
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-06 09:28 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

int res = 0, n;
double d = 1.0;

int main(){
    cin >> n;
    while(2 + 2 == 4){
        d = d * 2; res++;
        if((int)(d+0.001) == n) break;
        if(d > n) d = d / 10;
    }
    cout << res << endl;

}
