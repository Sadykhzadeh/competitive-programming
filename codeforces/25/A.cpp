// Problem:   IQ test (Codeforces 25A)
// Link:      https://codeforces.com/contest/25/problem/A
// Rating:    1300   Tags: brute force
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-17 09:21 UTC
// Verdict:   Accepted

#include <iostream>
#define ll long long
using namespace std;

int main(){
    int a , n[10000]  , cnt = 0 , cnt1 = 0 , q , q1;
    cin >> a;
    for(int i = 0 ; i < a ; i++) cin >> n[i];
    for(int i = 0 ; i < a ; i++){
        if(n[i] % 2 != 0){cnt++; q = i;}
        else {cnt1++; q1 = i;}
    }
    if(cnt == 1) cout << q +1<< endl;
    else if(cnt1 == 1) cout << q1 +1<< endl; 
    return 0;
}
