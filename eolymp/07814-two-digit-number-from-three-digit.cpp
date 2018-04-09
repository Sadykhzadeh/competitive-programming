// Problem:   Two-digit number from three-digit (eolymp 7814)
// Link:      https://eolymp.com/problems/7814
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-09 22:10 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;
int nicemin(int a, int b, int c){
if (a >= 10 && a <= 99)
if (b >= 10 && b <= 99)
if (c >= 10 && c <= 99)
return min(min(a,b),c);
else
return min(a,b);
else
if (c >= 10 && c <= 99)
return min(a,c);
else
return a;
else
if (b >= 10 && b <= 99)
if (c >= 10 && c <= 99)
return min(b,c);
else
return b;
else
if (c >= 10 && c <= 99)
return c;
else
return min(min(a,b),c);
}
int main()
{
int a;
cin >> a;
cout << nicemin(a/10, a/100*10+a%10, a%100);
}
