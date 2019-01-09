// Problem:   Triangle (eolymp 8184)
// Link:      https://eolymp.com/problems/8184
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-09 22:43 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
int a , b , c, d, e , f;
cin >> a >> b >> c >> d >> e >> f;
if (a > c) swap(a, c);
if (b > c) swap(b, c);
if (a > b) swap(a, b);
if (d > f) swap(d, f);
if (e > f) swap(e, f);
if (d > e) swap(d, e);
if (a == d && b == e && c == f && a*a + b*b == c*c) printf("YES\n");
else printf("NO\n");

 
}
