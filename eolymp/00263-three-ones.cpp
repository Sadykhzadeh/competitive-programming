// Problem:   Three ones (eolymp 263)
// Link:      https://eolymp.com/problems/263
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-23 20:03 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a[1000000], n;
    cin >> n;
    a[1] = 2; a[2] = 4; a[3] = 7;
    for(int i = 4; i <= n; i++){
        a[i] = (a[i-1] + a[i-2] + a[i-3]);
        a[i] %= 12345;
}
    cout << a[n];

    return 0;
}
