// Problem:   Regular graph (eolymp 5076)
// Link:      https://eolymp.com/problems/5076
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-20 21:50 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>

ll m, n, f, l;
bool p = true;
vector <ll> a;

int main() {
    cin >> n >> m;
    a.resize(n);
    for(ll i = 0; i < m; i++){
        cin >> f >> l;
        a[f-1]++; a[l-1]++;
    }
    for(ll i = 0; i < n; i++)if(a[i] != a[0]){p = false; break;}
    if(p) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
