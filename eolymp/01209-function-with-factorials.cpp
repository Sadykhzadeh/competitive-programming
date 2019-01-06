// Problem:   Function with factorials (eolymp 1209)
// Link:      https://eolymp.com/problems/1209
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-06 08:58 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll t, n;

#define MAX 100001
double lf[MAX], ans[MAX];

int main(){
    ll i;
    double res = lf[1] = 0.0;
    for(res = 0, i = 2; i < MAX; i++){
        res += log((double)i);
        lf[i] = res;
    }
    for(i = 2; i < MAX; i += 2){
        res = lf[i/2-1];
        res = lf[i-2] - (i - 2) * log(2.0) - res - res; // res = ln f(i)
        ans[i] = exp(res);
    }
    scanf("%d",&n);
    printf("%.4lf\n",ans[n]);
    return 0;
}
