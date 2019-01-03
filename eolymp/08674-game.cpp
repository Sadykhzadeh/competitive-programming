// Problem:   Game (eolymp 8674)
// Link:      https://eolymp.com/problems/8674
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-03 21:03 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll t, n;

int main(){
    cin >> t;
    while(t--){
        ll s = 1, ans = 0; bool me = false;
        cin >> n;
        while(s <= n){
            s *= 9;
            me = true;
            if(s >= n) break;
            else{
                s *= 2;
                me = false;
                if(s >= n) break;
            }
        }
        if(me) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}
