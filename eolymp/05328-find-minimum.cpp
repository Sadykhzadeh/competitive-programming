// Problem:   Find Minimum (eolymp 5328)
// Link:      https://eolymp.com/problems/5328
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-08 15:01 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

vector <ll> s;
ll n;

int main(){
    cin >> n;
    while(n--){ll t; cin >> t; s.pb(t);}
    sort(s.begin(), s.end());
    cout << s[0] << endl;
    return 0;
}
