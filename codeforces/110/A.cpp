// Problem:   Nearly Lucky Number (Codeforces 110A)
// Link:      https://codeforces.com/contest/110/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-08-30 15:36 UTC
// Verdict:   Accepted

#define ll unsigned long long
#define elif else if

using namespace std;

#include <iostream>

ll n, cnt = 0;

int main(){
    cin >> n;
    while(n){
        ll temp = n % 10;
        if(temp == 4 || temp == 7) cnt++;
        n/=10;
    }
    if(cnt == 4 || cnt == 7) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
