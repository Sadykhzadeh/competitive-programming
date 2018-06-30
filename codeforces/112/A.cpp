// Problem:   Petya and Strings (Codeforces 112A)
// Link:      https://codeforces.com/contest/112/problem/A
// Rating:    800   Tags: implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-30 12:09 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
#include <cctype>
#define elif else if

using namespace std;

int main(){
    string a , b;
    int brazz(0);
    cin >> a >> b;
    for(int i = 0 ; i < a.length(); i++){
        a[i] = (tolower(a[i]));
        b[i] = (tolower(b[i]));
        a[i] = (int)a[i];
        b[i] = (int)b[i];
        if(a[i] > b[i]){brazz = 1; break;}
        elif(a[i] < b[i]){brazz = -1; break;}
        elif(a[i] == b[i]) continue;
    }
    cout << brazz << endl;
    return 0;
}
