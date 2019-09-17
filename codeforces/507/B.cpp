// Problem:   Amr and Pins (Codeforces 507B)
// Link:      https://codeforces.com/contest/507/problem/B
// Rating:    1400   Tags: geometry, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-17 09:18 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

#define ld long double

using namespace std;
#define stop return 0
#define ll int
ld  t1 = clock();
void timer(){
ld t2 = clock(); cerr << "Vremya: " << (t2-t1)/1000 << " sekund!" << endl;
}

struct po{
    double x, y;
};

double dist(po a,po b){
  return sqrt((double)((double)a.x-(double)b.x)*((double)a.x-(double)b.x)+((double)a.y-(double)b.y)*((double)a.y-(double)b.y));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll r, a, b, c, d;
    cin >> r >> a >> b >> c >> d;
    po start; start.x = a; start.y = b;
    po finish; finish.x = c; finish.y = d;
    double k = dist(start, finish);
    cout << (ll)(ceil((double)k / (2*r))) << endl;
    timer();
    stop;
}
