// Problem:   Way Too Long Words (Codeforces 71A)
// Link:      https://codeforces.com/contest/71/problem/A
// Rating:    800   Tags: strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-29 13:07 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> s;
        if (s.length() > 10){
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
        else cout << s << endl;
    }
    return 0;
}
