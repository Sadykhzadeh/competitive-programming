// Problem:   Childrens Game (eolymp 1305)
// Link:      https://eolymp.com/problems/1305
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-29 17:37 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n;
string s[60];
char m[60];

int f(string a, string b){
    return a + b > b + a;
}

int main(){
    while(cin >> n, n){
        for(ll i = 0; i < n; i++){
            cin >> m;
            s[i] = (string)m;
        }
        sort(s, s + n, f);
        for(ll i = 0; i < n; i++){
            cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}
