// Problem:   Contacts (eolymp 2797)
// Link:      https://eolymp.com/problems/2797
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-19 08:18 UTC
// Verdict:   Accepted

#include <iostream>
#include <set>

#define ll long long

using namespace std;

set<ll>s;
ll n , a[100000];

int main(){
     cin >> n;
     for(int i = 0 ; i < n ; i++) cin >> a[i];
     for(int i = 0; i < n; i++) s.insert(a[i]);
     cout << s.size();
     return 0;
}
