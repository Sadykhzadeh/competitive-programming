// Problem:   Is your horseshoe on the other hoof? (Codeforces 228A)
// Link:      https://codeforces.com/contest/228/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-09-03 12:34 UTC
// Verdict:   Accepted

#define ll long long
#define elif else if

using namespace std;

#include <iostream>
#include <set>

ll a;
set <ll>n;


int main(){
    for(ll i = 0 ; i < 4; i++){cin >> a; n.insert(a);}
    cout << 4 - n.size() << endl;
    return 0;
}
