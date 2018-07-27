// Problem:   Bear and Big Brother (Codeforces 791A)
// Link:      https://codeforces.com/contest/791/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-27 18:22 UTC
// Verdict:   Accepted

#include <iostream>
#include <string>

using namespace std;

int t = 0, a , n;

int main(){
     cin >> a >> n;
     while(a <= n){
         a*=3; n*=2; t++;
     }
     cout << t << endl;
     return 0;
}
