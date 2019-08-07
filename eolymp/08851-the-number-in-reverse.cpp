// Problem:   The number in reverse (eolymp 8851)
// Link:      https://eolymp.com/problems/8851
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-07 15:05 UTC
// Verdict:   Accepted

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    return cout << s << endl, 0;
}
