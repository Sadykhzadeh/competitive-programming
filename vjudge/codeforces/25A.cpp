// Problem:   CodeForces 25A
// Link:      https://codeforces.com/problemset/problem/25/A
// Language:  GNU G++17 9.2.0 (64 bit, msys 2)
// Submitted: 2020-07-23 08:14 UTC
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
