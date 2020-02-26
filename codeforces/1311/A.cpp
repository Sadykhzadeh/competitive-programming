// Problem:   Add Odd or Subtract Even (Codeforces 1311A)
// Link:      https://codeforces.com/contest/1311/problem/A
// Rating:    800   Tags: greedy, implementation, math
// Language:  C++17 (GCC 7-32)
// Submitted: 2020-02-26 16:51 UTC
// Verdict:   Accepted

using namespace std;

#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define F_READ	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define elif else if

ll n, a, b;

void solve(){
	cin >> a >> b;
	if(a == b) cout << 0 << endl;
	else{
		if(a > b){
			if(a % 2 == b % 2) cout << 1 << endl;
			else cout << 2 << endl;
		}
		else{
			if(a % 2 != b % 2) cout << 1 << endl;
			else cout << 2 << endl;
		}
	}
}

int main(){
	cin >> n;
	while(n--) solve();
	return 0;
}
