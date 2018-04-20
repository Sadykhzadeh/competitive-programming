// Problem:   Average value - 1 (eolymp 8358)
// Link:      https://eolymp.com/problems/8358
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-20 06:49 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a , mi = 20000, ma = -1, p = 1 , q = 1 , n = 0 , sum = 0;
    while(cin >> a){
        if(ma < a){
            ma = a;
            p = 1;
        }
        else if(ma == a){
            p++;
        }
        if(mi > a){
            mi = a;
            q = 1;
        }
        else if(mi == a){
            q++;
        }
        n++;
        sum+=a;
    }
    sum-=(ma * p + mi * q);
    n -= (p + q);
    cout << setprecision(0) << fixed <<(sum / n) << endl;
    return 0;
}
