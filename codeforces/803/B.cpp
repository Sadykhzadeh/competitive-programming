// Problem:   Distances to Zero (Codeforces 803B)
// Link:      https://codeforces.com/contest/803/problem/B
// Rating:    1200   Tags: constructive algorithms
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-13 23:25 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)

using namespace std;

#include <bits/stdc++.h>

ll n;
vector <ll> v;

int main(){
	cin >> n;
	for(ll i = 1; i <= n; i++){
		ll temp;
		cin >> temp;
		if(!temp){
			v.pb(i);
		}
	}
	ll b = 0 , a = 1;
	for(ll i = 1; i <= n; i++){
		cout << min(abs(v[b] - i) , abs(v[a] - i)) << " ";
		if (i == v[a]){
			b++; a++;
		}
	}
    return 0;
}
