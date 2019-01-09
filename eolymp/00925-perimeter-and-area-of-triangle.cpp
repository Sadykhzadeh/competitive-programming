// Problem:   Perimeter and area of triangle (eolymp 925)
// Link:      https://eolymp.com/problems/925
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-09 21:29 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

double a,a1, b,b1, c,c1;     //(x,y) of points
double s1, s2, s3;  //AB, BC & AC
double P;           //Perimetr
double p, S;    //(Формула Герона) полупериметр и площадь

int main(){
    cout << fixed << setprecision(4);
    cin >> a >> a1;
    cin >> b >> b1;
    s1 = sqrt((a-b)*(a-b)+(a1-b1)*(a1-b1));
    cin >> c >> c1;
    s2 = sqrt((c-a)*(c-a)+(c1-a1)*(c1-a1));
    s3 = sqrt((b-c)*(b-c)+(b1-c1)*(b1-c1));
    P = s1 + s2 + s3; cout << P << ' ';
    p = P / 2;
    S = sqrt(p*(p-s1)*(p-s2)*(p-s3));
    cout << S << '\n';
    return 0;
}
