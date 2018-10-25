// Problem:   Outside the interval (eolymp 8615)
// Link:      https://eolymp.com/problems/8615
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-25 22:08 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll x, a, b;

int main(){
    cin >> x >> a >> b;
    if(x >= a && x <= b) cout << "IN" << endl;
    else cout << "OUT" << endl;
    return 0;
}
