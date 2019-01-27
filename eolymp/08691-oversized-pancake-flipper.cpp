// Problem:   Oversized Pancake Flipper (eolymp 8691)
// Link:      https://eolymp.com/problems/8691
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-27 08:41 UTC
// Verdict:   Accepted

typedef unsigned long long ll;
#define FAST_READ ios_base::sync_with_stdio(false)
#define elif else if
#define pb push_back
#define ins insert
//#define ll long double

using namespace std;

#include <bits/stdc++.h>

ll t, n;
string a;

int main(){
    cin >> t;
    for(ll qwe = 1; qwe <= t; qwe++){
        cin >> a >> n;
        cout << "Case #" << qwe << ": ";
        ll cnt(0);
        for(ll i = 0; i < a.length() - n + 1; i++){
            if(a[i] == '-'){
                    cnt++;
                for(ll j = i; j < i + n; j++){
                    if(a[j] == '-') a[j] = '+'; elif(a[j] == '+') a[j] = '-';
                }
                //for(ll y = 0; y < a.length(); y++) cout << a[y]; cout << endl;
                i = 0;
            }
            else continue;
        }
        bool kek(true);
        for(ll i = 0; i < a.length(); i++){
            if(a[i] == '-'){kek = false; break;}
        }
        if(kek) cout << cnt << endl;
        else cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}
