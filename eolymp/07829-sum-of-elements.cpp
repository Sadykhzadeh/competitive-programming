// Problem:   Sum of elements (eolymp 7829)
// Link:      https://eolymp.com/problems/7829
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-18 08:39 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll n;
long double q, ans(0);

int main(){
	cin >> n;
	while(n--){cin >> q; ans+=q;}
	cout << fixed << setprecision(1) << ans << endl;
}
