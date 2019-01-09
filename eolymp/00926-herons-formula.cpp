// Problem:   Heron's formula (eolymp 926)
// Link:      https://eolymp.com/problems/926
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-09 21:33 UTC
// Verdict:   Accepted

//typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert
#define ll double

using namespace std;

#include <bits/stdc++.h>

ll a, b, c, d, f;
ll p, s;
ll p1,s1;

int main(){
    cout << fixed << setprecision(4);
    cin >> a >> b >> c >> d >> f;
    p = a + b + f; p1 = c + d + f;
    p/=2; p1/=2;
    s = sqrt(p*(p-a)*(p-b)*(p-f));
    s1 = sqrt(p1*(p1-c)*(p1-d)*(p1-f)); cout << s + s1 << '\n';
    return 0;
}
