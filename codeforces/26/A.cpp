// Problem:   Almost Prime (Codeforces 26A)
// Link:      https://codeforces.com/contest/26/problem/A
// Rating:    900   Tags: number theory
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-08-29 20:33 UTC
// Verdict:   Accepted

#define ll long long
#define elif else if

using namespace std;

#include <iostream>
#include <set> 

int prov2(ll x){
    for(ll i = 2; i*2 <= x; i++) if(x % i == 0) return false;
    return true;
}

int prov(ll x){
    if(x <= 5) return false;
    set <ll> a;
    for(ll i = 2; i*2 <= x; i++){
        if(x % i == 0 && prov2(i) == true) a.insert(i);
    }
    if(a.size() == 2) return true;
    else return false;
}

ll n, cnt(0);

int main(){
    cin >> n;
    for(ll i = 1; i <= n; i++){
        if(prov(i) == true) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
