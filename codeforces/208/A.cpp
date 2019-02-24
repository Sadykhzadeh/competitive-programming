// Problem:   Dubstep (Codeforces 208A)
// Link:      https://codeforces.com/contest/208/problem/A
// Rating:    900   Tags: strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-24 22:36 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

string a;
vector <char> ans;

int main(){
    cin >> a;
    for(ll i = 0; i < a.length(); i++){
        ans.pb(a[i]);
    }
    for(ll i = 1; i < ans.size() - 1; i++){
        if(ans[i-1] == 'W' && ans[i] == 'U' && ans[i+1] == 'B'){
            ans[i-1] = ans[i] = ans[i+1] = '-';
        }
    }
    for(ll i = 0; i < ans.size() - 1; i++){
        if(ans[i] != '-') cout << ans[i];
        if(ans[i] != '-' && ans[i+1] == '-') cout << ' ';
    }
    if(ans[ans.size() - 1] != '-') cout << ans[ans.size() - 1];
    cout << endl;//WUBWUBWUBSRWUBWUBWUBSR
    return 0;
}
