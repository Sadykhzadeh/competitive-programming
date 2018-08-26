// Problem:   Word Capitalization (Codeforces 281A)
// Link:      https://codeforces.com/contest/281/problem/A
// Rating:    800   Tags: implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-08-26 10:25 UTC
// Verdict:   Accepted

/*
Code is more that some bytes in a file...
                                    -Azer Sadykhzadeh
*/

#define ll long long 
#define elif else if

using namespace std;

#include <iostream> //cin & cout
#include <string>

char a; string b;

int main(){
    cin >> a>> b;
    if(!((int)a <= 90)){
        a -= 32;
    }
    cout << a<< b << endl;
    return 0;
}
