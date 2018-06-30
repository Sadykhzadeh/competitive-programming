// Problem:   Football (Codeforces 96A)
// Link:      https://codeforces.com/contest/96/problem/A
// Rating:    900   Tags: implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-30 11:39 UTC
// Verdict:   Accepted

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int q = 1;
    for (int i = 1; i < s.length(); i++){
        if (s[i] == s[i - 1]){
            q += 1;
            if (q == 7){
                cout << "YES" << endl;
                return 0;
                }
        }
        else q = 1;
    }
    cout << "NO" << endl;
    return 0;
}
