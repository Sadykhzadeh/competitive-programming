// Problem:   EOlymp 2327
// Link:      https://eolymp.com/problems/2327
// Language:  C++
// Submitted: 2018-11-26 22:54 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>
const ll RANGE = 1000450;
 
ll m[100010], n, v;

int main(){
	cin >> n;
	memset(m,0,sizeof(m));
	for(ll i = 0; i < n; i++){
		cin >> v;
		m[v]++;
	}
	for(ll i = 0; i < 100010; i++) for(ll j = 0; j < m[i]; j++) cout<< i << ' ';
	cout << endl;
	return 0;
}
