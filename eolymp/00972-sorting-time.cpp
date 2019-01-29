// Problem:   Sorting time (eolymp 972)
// Link:      https://eolymp.com/problems/972
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-29 17:55 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n, l;
ll m[100][100], syma[1000];
ll temp1, temp2, temp3;

int main(){
	cin >> n;
	for(ll i = 0; i < n; i++)
		for(ll j = 0; j < 3; j++){
			cin >> m[i][j];
			if(j == 2) syma[i] = syma[i] + m[i][j];
			else{
                    syma[i] = (syma[i] + m[i][j]) * 60;
            }
		}
	sort(syma, syma + n);
	for(ll i = 0; i < n; i++){
		ll temp1 = syma[i] % 60;
		syma[i] = syma[i] / 60;
		ll temp2 = syma[i] % 60;
		temp3 = syma[i] / 60;
		cout << temp3 << " " << temp2 << " " << temp1 << endl;
	}
	return 0;
}
