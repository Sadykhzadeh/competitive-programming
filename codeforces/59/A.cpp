// Problem:   Word (Codeforces 59A)
// Link:      https://codeforces.com/contest/59/problem/A
// Rating:    800   Tags: implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-10-05 09:13 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <cctype>
#include <string>

string a;
ll q1, q2;
bool flag;

int main(){
    q1 = q2 = 0;
    cin >> a;
    for(ll i = 0 ; i < a.length(); i++){
        if(a[i] >= 'A'&& a[i] <= 'Z') q1++;
        elif(a[i] >= 'a' && a[i] <= 'z') q2++;
    }
    if(q1 == q2 || q2 > q1) flag =  true;
    else flag = false;
    if(flag){
        for(ll i = 0 ; i < a.length(); i++) cout << (char)tolower(a[i]);
    }
    else{
        for(ll i = 0 ; i < a.length(); i++) cout << (char)toupper(a[i]);
    }
    return 0;
}
