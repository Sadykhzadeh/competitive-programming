// Problem:   Chat room (Codeforces 58A)
// Link:      https://codeforces.com/contest/58/problem/A
// Rating:    1000   Tags: greedy, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-08-26 10:31 UTC
// Verdict:   Accepted

/*
Code is more that some bytes in a file...
                                    -Azer Sadykhzadeh
*/

#define ll long long 
#define elif else if

using namespace std;

#include <iostream>     //cin cout
#include <string>       //string

string s;
ll cnt = 0;

int main(){
    cin >> s;
    while (cnt < s.length() && s[cnt] != 'h') cnt++;
    cnt++;
    while (cnt < s.length() && s[cnt] != 'e') cnt++;
    cnt++;
    while (cnt < s.length() && s[cnt] != 'l') cnt++;
    cnt++;
    while (cnt < s.length() && s[cnt] != 'l') cnt++;
    cnt++;
    while (cnt < s.length() && s[cnt] != 'o') cnt++;
    if (cnt < s.length()) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}
