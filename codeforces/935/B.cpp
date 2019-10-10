// Problem:   Fafa and the Gates (Codeforces 935B)
// Link:      https://codeforces.com/contest/935/problem/B
// Rating:    900   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-10-10 17:47 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

#define ll long long

ll n;
string s;
ll a, b;

int main(){
    a = b = 0;
 //   F_READ;
    cin >> n;
    cin >> s;
    ll cnt = 0;
    for(ll i = 0; i < n - 1; i++){
        if(s[i] == 'U') b++;    else a++;
        if(a == b && a != 0 && s[i] == s[i+1]) cnt++;
       // qq2(a,b);
    }
    cout << cnt << endl;
}
