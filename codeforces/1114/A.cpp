// Problem:   Got Any Grapes? (Codeforces 1114A)
// Link:      https://codeforces.com/contest/1114/problem/A
// Rating:    800   Tags: brute force, greedy, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-15 18:48 UTC
// Verdict:   Accepted

//typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert
#define ll double

using namespace std;

#include <bits/stdc++.h>

ll a, b, c, x, y, z;

int main(){
    cin >> x >> y >> z >> a >> b >> c;
    if(x > a){cout << "NO" << endl; return 0;}
    elif(y - (a + b - x) > 0){cout << "NO" << endl; return 0;}
    elif(z - (a + b + c - x - y) > 0){cout << "NO" << endl; return 0;}
    else cout << "YES" << endl;
    return 0;
}
