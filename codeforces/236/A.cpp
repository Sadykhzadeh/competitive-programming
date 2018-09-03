// Problem:   Boy or Girl (Codeforces 236A)
// Link:      https://codeforces.com/contest/236/problem/A
// Rating:    800   Tags: brute force, implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-09-03 11:39 UTC
// Verdict:   Accepted

#define ll long long
#define elif else if

using namespace std;

#include <iostream>
#include <string>
#include <set>

string n;
set <char> a;

int main(){
    cin >> n;
    for(ll i = 0 ; i < n.length(); i++){
        a.insert(n[i]);
    }
    if(a.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}
