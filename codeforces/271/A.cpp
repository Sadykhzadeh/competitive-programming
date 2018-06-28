// Problem:   Beautiful Year (Codeforces 271A)
// Link:      https://codeforces.com/contest/271/problem/A
// Rating:    800   Tags: brute force
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-28 07:44 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int prov(int x){
    int a = x % 10;
    int b = x / 10 % 10;
    int c = x / 100 % 10;
    int d = x / 1000;
    if(a!=b && a!=c && 
    a !=d && b!=c && b!=d && c!=d) return 1;
    else return 0;
}

int main(){
    int a;
    cin >> a;
    a=a+1;
    while(prov(a)!=1) a++;
    cout << a << endl;
    return 0;
}
