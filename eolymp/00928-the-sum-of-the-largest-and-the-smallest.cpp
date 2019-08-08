// Problem:   The sum of the largest and the smallest (eolymp 928)
// Link:      https://eolymp.com/problems/928
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-08 14:48 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>

ll n, temp, temp1;
vector<ll> a;

int main(){
    cin >> n;
    while(n--){
        cin >> temp;
        a.pb(temp);
    }
    n = a.size(); temp = -999999; temp1 = 999999999;
    for(ll i = 0; i < n; i++){
        if(temp < a[i]) temp = a[i];
        if(temp1 > a[i]) temp1 = a[i];
    }
    cout << temp + temp1 << endl;
    return 0;
}
