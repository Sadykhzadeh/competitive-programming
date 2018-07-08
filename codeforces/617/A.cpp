// Problem:   Elephant (Codeforces 617A)
// Link:      https://codeforces.com/contest/617/problem/A
// Rating:    800   Tags: math
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-08 10:17 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>

using namespace std;

#define ll long long
#define elif else if

int main(){
    int n,i(0);
    cin >> n;
    while(n >=5){
        n-=5; i++;
    }
    if(n !=0)cout << i + 1 << endl;
    else cout << i << endl;
}
