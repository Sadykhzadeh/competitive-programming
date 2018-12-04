// Problem:   The first digit of the number (eolymp 8243)
// Link:      https://eolymp.com/problems/8243
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-04 08:22 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

char n; char h;

int main(){
    cin >> h >> n;
    if(h == '-') cout << n;
    else cout << h;
    return 0;
}
