// Problem:   HQ9+ (Codeforces 133A)
// Link:      https://codeforces.com/contest/133/problem/A
// Rating:    900   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-09-03 15:35 UTC
// Verdict:   Accepted

#define ll long long
#define elif else if

using namespace std;

#include <iostream>
#include <string>

string n;
bool b = false;

int main(){
    cin >> n;
    for(ll i = 0 ; i < n.length(); i++){
        if(n[i] == 'H' || n[i] == 'Q' || n[i] == '9'){ b = true; break;}
    }
    if(b == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
