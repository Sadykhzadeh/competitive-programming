// Problem:   Forgetting Things (Codeforces 1225A)
// Link:      https://codeforces.com/contest/1225/problem/A
// Rating:    900   Tags: math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-10-26 18:07 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if(a == 9 && b == 1) cout << "9 10" << endl;
    else if(a == b - 1)  cout << a << 99 << " " << b << "00" << endl;
    else if(a == b) cout <<  a << 12 << " " << b << 13 << endl;
    else cout << -1 << endl;
}
