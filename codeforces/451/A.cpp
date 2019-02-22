// Problem:   Game With Sticks (Codeforces 451A)
// Link:      https://codeforces.com/contest/451/problem/A
// Rating:    900   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-22 18:16 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll m, n;
string a;

//Akshat
//Malvika

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> m >> n;
    if(m == n && m == 1) a = "Akshat";
    elif(((m + n - (abs(n-m)))/2) % 2 == 0) a = "Malvika";
    else a = "Akshat";
    cout << a << endl;
    return 0;
}
