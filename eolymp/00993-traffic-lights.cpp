// Problem:   Traffic lights (eolymp 993)
// Link:      https://eolymp.com/problems/993
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-12 18:06 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>
#include <cstring>

ll n, m, temp, a[109] = {0};

int main(){
    cin >> n >> m;
    for(ll i = 0; i < 2*m; i++){
        cin >> temp; a[temp-1]++;
    }
    for(ll i = 0; i < n; i++) cout << a[i] << ' ';
    cout << endl;
    return 0;
}
