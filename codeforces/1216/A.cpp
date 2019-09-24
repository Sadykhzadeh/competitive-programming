// Problem:   Prefixes (Codeforces 1216A)
// Link:      https://codeforces.com/contest/1216/problem/A
// Rating:    800   Tags: strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-24 08:18 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n;
string a;
#define pb push_back
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n >> a; bool h = false; int cnt, cnt1; cnt = cnt1 = 0;
    ll ans = 0;
    for(ll i = 1; i < n; i+=2){
        if(a[i] == a[i-1]){
            if(a[i-1] == 'a'){a[i-1] = 'b'; ans++;}
            else if(a[i-1] == 'b'){a[i-1] = 'a'; ans++;}
        }
    }
    cout << ans << endl << a << endl;
    return 0;
}
