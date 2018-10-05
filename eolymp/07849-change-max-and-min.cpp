// Problem:   Change max and min (eolymp 7849)
// Link:      https://eolymp.com/problems/7849
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-05 08:39 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>

vector <ll> a;
ll n, temp;


int main(){
    cin >> n;
    for(ll i = 0 ; i < n; i++){
        cin >> temp;
        a.pb(temp);
    }
    ll ma = -12345, mi = 8765432;
    for(ll i = 0 ; i < n; i++){
        if(a[i] > ma) ma = a[i];
        if(a[i] < mi) mi = a[i];
    }
    for(ll i = 0; i < n; i++){
        if(a[i] == ma) a[i] = mi;
        elif(a[i] == mi) a[i] = ma;
    }
    for(ll i = 0 ; i < n ; i++) cout << a[i] << ' ';
    return 0;
}
