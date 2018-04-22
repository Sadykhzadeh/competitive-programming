// Problem:   Number of words (eolymp 909)
// Link:      https://eolymp.com/problems/909
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-22 18:48 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;

int main (){
    string stroka;
    int cnt = 0;
    while(cin >> stroka) cnt++;
    cout << cnt << endl;
    return 0;
}
