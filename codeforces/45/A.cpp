// Problem:   Codecraft III (Codeforces 45A)
// Link:      https://codeforces.com/contest/45/problem/A
// Rating:    900   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-28 09:07 UTC
// Verdict:   Accepted

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    int n , s;
    cin >>a >> n;
    if(n % 12 == 0) cout << a << endl;
    else{
        n = n % 12;
        string month[12]={"January",
        "February","March", "April","May",
        "June","July","August","September","October",
        "November","December"};
        for(int i = 0 ;i < 12;i++){
            if(a == month[i]){ s = i; break;}
        }
        if((s+n+1) > 12) s = (s + n + 1) % 12 -1;
        else s += n;
        cout <<month[s] << endl;
    }
    return 0;
}
