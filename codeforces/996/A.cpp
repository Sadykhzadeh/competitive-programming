// Problem:   Hit the Lottery (Codeforces 996A)
// Link:      https://codeforces.com/contest/996/problem/A
// Rating:    800   Tags: dp, greedy
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-27 16:07 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int a , i = 0;

int main(){
     cin >> a;
     while(a >= 100){ a-=100; i++;}
     while(a >= 20){ a-=20; i++;}
     while(a >= 10){ a-=10; i++;}
     while(a >= 5){ a-=5; i++;}
     while(a >= 1){ a-=1; i++;}
     cout << i << endl;
     return 0;
}
