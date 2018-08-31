// Problem:   Anton and Letters (Codeforces 443A)
// Link:      https://codeforces.com/contest/443/problem/A
// Rating:    800   Tags: constructive algorithms, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-08-31 19:20 UTC
// Verdict:   Accepted

#define ll long long
#define elif else if

using namespace std;

#include <iostream>
#include <set>
#include <string>

set <char> s;
string n;

int main(){
    getline(cin,n);
    for(ll j = 0 ; j < n.size(); j++){
        if(isalpha(n[j])) s.insert(n[j]);
    }
    cout << s.size() << endl;
    cout << endl;
    return 0;
}
