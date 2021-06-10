// Problem:   Water (eolymp 609)
// Link:      https://eolymp.com/problems/609
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2021-06-10 10:05 UTC
// Verdict:   Accepted

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int l = 0, r  = n - 1, res = 0;
    if (a[r] > k){
        cout << "Impossible" << endl;
        return 0;
    }
    while (l <= r){
        if (a[l] + a[r] <= k)
            l++;
        r--;
        res++;
    }
    cout << res << endl;
    return 0;
}
