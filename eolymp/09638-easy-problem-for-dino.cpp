// Problem:   Easy problem for Dino (eolymp 9638)
// Link:      https://eolymp.com/problems/9638
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2020-03-09 08:43 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll a, b;
    cin >> a >> b;
    if( ( a + b ) % 2 ){
        cout << '-' << endl;
    }
    else{
        a += b;
        cout << a / 2 << endl;
    }
    return 0;
}
