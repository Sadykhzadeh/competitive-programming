// Problem:   Inside the interval (eolymp 8614)
// Link:      https://eolymp.com/problems/8614
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-25 22:06 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll a, b, c;

int main(){
    cin >> a >> b >> c;
    if(a >= b && a <= c) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
