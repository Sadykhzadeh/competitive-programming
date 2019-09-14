// Problem:   The sum of the largest and the smallest (eolymp 928)
// Link:      https://eolymp.com/problems/928
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 11:58 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n; vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    cout << a[0] + a[n-1] << endl;
}
