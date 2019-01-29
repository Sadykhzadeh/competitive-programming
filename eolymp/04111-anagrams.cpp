// Problem:   Anagrams (eolymp 4111)
// Link:      https://eolymp.com/problems/4111
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-29 14:15 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

int main(){
    string a, b; ll t;
    cin >> t;
    while(t--){
    cin >> a >> b;
    sort(&a[0], &a[a.length()]);
    sort(&b[0], &b[b.length()]);
   // cout << a << endl; cout << b << endl;
    if(a == b) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
    return 0;
}
