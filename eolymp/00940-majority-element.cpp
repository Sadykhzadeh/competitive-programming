// Problem:   Majority Element (eolymp 940)
// Link:      https://eolymp.com/problems/940
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2021-09-22 14:07 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll m[110] , n, maj(0), cnt(0), res(0); 

int main(){
	cin >> n;
	for(int i = 0; i < n; i++) cin >> m[i]; 
	for(int i = 0; i < n; i++){ 
		if(cnt == 0){maj = m[i]; cnt++;}  
		elif(m[i] == maj) cnt++;
		else cnt--; 
	} 
	cnt = 0; 
	for(int i = 0; i < n; i++) if(m[i] == maj) cnt++; 
	if(2 * cnt > n) res = maj; 
	else res = -1; 
	cout << res << endl;
	return 0;
}
