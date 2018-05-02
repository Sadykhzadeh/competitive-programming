// Problem:   Area of a Polygon (eolymp 60)
// Link:      https://eolymp.com/problems/60
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-02 08:00 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;
 
int main() { 
    double n, x1, x2, y1, y2, x, y, ans = 0; 
    cin >> n >> x >> y; 
    x1 = x; 
    y1 = y; 
    for (int i = 0; i<(n - 1); i++) { 
        cin >> x2 >> y2; 
        ans += (x1 + x2) * (y2 - y1); 
        x1 = x2; 
        y1 = y2; 
    } 
    ans += (x + x2) * (y - y2);
	ans = abs(ans) / 2; 
    cout << fixed << setprecision(3) << ans << endl;
    return 0; 
}
