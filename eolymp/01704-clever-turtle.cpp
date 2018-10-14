// Problem:   Clever turtle (eolymp 1704)
// Link:      https://eolymp.com/problems/1704
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-14 21:56 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <cstring>

ll a[36][36];
ll m , n;

int main(){
	cin >> m >> n;
	memset(a, 0, sizeof(a));
	a[1][1] = 1;
	for(ll i = 1; i <= m; i++) for(ll j = 1; j <= n; j++)
	a[i][j] += (a[i-1][j] + a[i][j-1]);
	cout << a[m][n] << endl;
	return 0;
}
