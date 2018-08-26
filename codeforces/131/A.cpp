// Problem:   cAPS lOCK (Codeforces 131A)
// Link:      https://codeforces.com/contest/131/problem/A
// Rating:    1000   Tags: implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-08-26 11:56 UTC
// Verdict:   Accepted

#define ll long long
#define elif else if

using namespace std;

#include <iostream>
#include <string>

char a; string b;
ll p = 0;

int main(){
    cin >> a >> b;
    for(ll i = 0 ; i < b.size(); i++){
        if('A' <= b[i] && b[i] <= 'Z') p++;
    }
    if(p == b.size() && ('a' <=  a && a <= 'z')){
        a-=32;
        for(ll i = 0 ; i < b.size(); i++){
            b[i] += 32;
        }
    }
    elif(p == b.size() && ('A' <=  a && a <= 'Z')){
        a += 32;
        for(ll i = 0 ; i < b.size(); i++){
            b[i] += 32;
        }
    }
    cout << a << b << endl;
    return 0;
}
