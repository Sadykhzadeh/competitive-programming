// Problem:   Mouse and corns (eolymp 15)
// Link:      https://eolymp.com/problems/15
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-14 21:53 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <cstring>

ll m, n;
ll a[110][110];
char answer[290];

int main(){
	cin >> m >> n;
	memset(a, -1, sizeof(a));
	for(ll i = 1; i <= m; i++){
		for(ll j = 1; j <= n; j++){
			cin >> a[m-i+1][j];
		}
	}
	a[0][1] = 0;
	for(ll i = 1; i <= m; i++){
		for(ll j = 1; j <= n; j++){
			a[i][j] = max(a[i-1][j], a[i][j-1]) + a[i][j];
		}
	}
	ll cnt(0);
	while(m + n > 2){
		if(a[m-1][n] > a[m][n-1]){
			answer[cnt] = 'F';
			m--;
		}
		else{
			answer[cnt] = 'R';
			n--;
		}
		cnt++;
	}
	while(cnt--) cout << answer[cnt];
	cout << endl;
	return 0;
}
