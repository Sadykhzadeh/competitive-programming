// Problem:   Queue at the School (Codeforces 266B)
// Link:      https://codeforces.com/contest/266/problem/B
// Rating:    800   Tags: constructive algorithms, graph matchings, implementation, shortest paths
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-18 10:11 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll m, n; char a[60];

int main(){
	cin >> m >> n;
	for(ll i = 1; i <= m; i++) cin >> a[i];
	for(ll i = 0; i < n; i++){
		for(ll j = m; j >= 0; j--){
			if(a[j] == 'G' && a[j-1] == 'B'){swap(a[j], a[j-1]); j--;}
		}
	}
	for(ll i = 1; i <= m; i++) cout << a[i];
}
