// Problem:   How many numbers (eolymp 8381)
// Link:      https://eolymp.com/problems/8381
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-05 17:02 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <cmath> // pow()

ll n, res(0);

int main(){
    cin >> n;
    if(n >= 1) res += 9;
    if(n >= 2) res += 81;
    if(n >= 3) res += 648;
    if(n >= 4) res += 4536;
    if(n >= 5) res += 27216;
    if(n >= 6) res += 136080;
    if(n >= 7) res += 544320;
    if(n >= 8) res += 1632960;
    if(n >= 9) res += 3265920;
    if(n >= 10) res += 3265920;
    cout << res << endl;
    return 0;
}
