// Problem:   Gennady and a Card Game (Codeforces 1097A)
// Link:      https://codeforces.com/contest/1097/problem/A
// Rating:    800   Tags: brute force, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-01-04 14:50 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

string n;
string a, b, c, d, e;
bool hello = false;

int main(){
    cin >> n;
    cin >> a >> b >> c >> d >> e;
    if(a[0] == n[0] || b[0] == n[0] || c[0] == n[0] || d[0] == n[0] || e[0] == n[0]) hello = true;
    elif(a[1] == n[1] || b[1] == n[1] || c[1] == n[1] || d[1] == n[1] || e[1] == n[1]) hello = true;
    if(hello ) cout << "YES" << endl; else cout << "NO" << endl;
    return 0;
}
