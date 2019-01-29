// Problem:   Tricky Sorting (eolymp 1462)
// Link:      https://eolymp.com/problems/1462
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-29 16:31 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;
#include <bits/stdc++.h>

int f(int a, int b){
    if(a % 10 == b % 10) return a < b;
    return a % 10 < b % 10;
}

int main(){
    int a[1000], n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, f);
    for(int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}
