// Problem:   Number of operations (eolymp 901)
// Link:      https://eolymp.com/problems/901
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-30 21:17 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

string a;

int main(){
    cin >> a; ll p = 0, ans = 0;
    if(a[0] == '-' || a[0] == '+' || a[0] == '*') p++;
    for(ll i = p; i < a.length(); i++){
        if(a[i] == '+' || a[i] == '-' || a[i] == '*') ans++;
    }
    cout << ans << endl;
    return 0;
}
