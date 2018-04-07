// Problem:   Cinema (eolymp 4752)
// Link:      https://eolymp.com/problems/4752
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-07 10:12 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n , m , i , j ;
	cin >> n >> m;
	int a1[n][m] , a2[n][m];
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < m ; j++){
			a1[i][j] = i * m + j + 1;
			a2[i][j] = j * n + i + 1;
		}
	}
	int ans = 0;
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < m ; j++){
			if(a1[i][j] == a2[i][j]) ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
