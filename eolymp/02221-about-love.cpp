// Problem:   About love... (eolymp 2221)
// Link:      https://eolymp.com/problems/2221
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-30 17:31 UTC
// Verdict:   Accepted

typedef long long ll;
typedef unsigned long long ull;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/
#define qq2(x,y) cout << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007LL
#define line cout << endl << endl << "========================" << endl
#define COUT(x) return cout << (x) << endl, 0;
#define stop return 0
using namespace std;
#include <bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#define endl "\n"
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS

int func(double x, double a, double b) {
    return ((a < x + 1e-6) && (x < b + 1e-6)) || ((b < x + 1e-6) && (x < a + 1e-6));
}

double calc(int x, int y, int vx, int vy, int x1, int y1, int x2, int y2){
    int a = y2 - y1;
    int b = x1 - x2;
    int c = -a * x1 - b * y1;
    int u = a * vx + b * vy;
    int v = a * x + b * y + c;
    double time1, time2, curX, curY;
    if(vx == 0 && vy == 0) return 1e100;
    if(a == 0 && b == 0 && (vx * (y1 - y) != vy * (x1 - x))){
        return 1e100;
    }
    if(u){
        time1 = ((double) -v) / u;
        if(time1 < 1e-6) return 1e100;
        curX = x + time1 * vx;
        curY = y + time1 * vy;
        if (!func(curX, x1, x2) || !func(curY, y1, y2)) return 1e100;
        return time1;
    }
    if(v != 0){
        return 1e100;
    }
    if(vx != 0){
        time1 = ((double) (x1 - x)) / vx;
    }
    else{
        time1 = ((double) (y1 - y)) / vy;
    }

    if(vx != 0){
        time2 = ((double) (x2 - x)) / vx;
    }
    else{
        time2 = ((double) (y2 - y)) / vy;
    }
    if(time1 < 0){
        time1 = 1e100;
    }
    if(time2 < 0){
        time2 = 1e100;
    }
    return min(time1, time2);
}

int main(){
    double time, time1, time2, time3, time4;
    int x1, y1, x2, y2, x3, y3, x4, y4, v1x, v1y, v2x, v2y;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> v1x >> v1y >> v2x >> v2y;
    time1 = calc(x1, y1, v1x - v2x, v1y - v2y, x3, y3, x4, y4);
    time2 = calc(x2, y2, v1x - v2x, v1y - v2y, x3, y3, x4, y4);
    time3 = calc(x3, y3, v2x - v1x, v2y - v1y, x1, y1, x2, y2);
    time4 = calc(x4, y4, v2x - v1x, v2y - v1y, x1, y1, x2, y2);

    time = min3(time1, time2, min(time3, time4));

    if(time == 1e100) COUT(-1);
    return (cout << fixed << setprecision(10) << time << endl), 0;
}
