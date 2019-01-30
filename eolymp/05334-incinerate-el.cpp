// Problem:   Incinerate el (eolymp 5334)
// Link:      https://eolymp.com/problems/5334
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-30 20:22 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

struct co{
    ll a, b, ind;
} *a;

ll f(co x, co y){
    if(x.a == y.a) return x.b < y.b;
    else return x.a < y.a;
}

ll t;

int main(){
    cin >> t;
    a = new co[t];
    for(ll i = 0; i < t; i++){
        cin >> a[i].a >> a[i].b; a[i].ind = i + 1;
    }
    sort(a, a + t, f);
    for(ll i = 0; i < t; i++) cout << a[i].ind << " "; cout << endl; return 0;
}
