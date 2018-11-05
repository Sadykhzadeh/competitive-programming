// Problem:   Good number (eolymp 7817)
// Link:      https://eolymp.com/problems/7817
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-05 16:56 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <cmath> // pow()

ll n;

int main(){
    cin >> n;
    ll res = 1; 
    while(n--){
        res*=5;
    }
    cout << res << endl;
    return 0;
}
