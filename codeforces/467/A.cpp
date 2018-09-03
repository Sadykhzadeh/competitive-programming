// Problem:   George and Accommodation (Codeforces 467A)
// Link:      https://codeforces.com/contest/467/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-09-03 11:48 UTC
// Verdict:   Accepted

#define ll long long
#define elif else if

using namespace std;

#include <iostream>

ll n, a , a1, cnt(0);

int main(){
    cin >> n;
    while(n--){
        cin >> a >> a1;
        if(a1 - a >= 2) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
