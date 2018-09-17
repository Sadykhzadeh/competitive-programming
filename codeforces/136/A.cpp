// Problem:   Presents (Codeforces 136A)
// Link:      https://codeforces.com/contest/136/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-09-17 19:20 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>

ll n, m = 999999999, k, s = 0;
vector <ll> a;

int main(){
	cin >> n;
	for(ll i = 0; i < n; i++){
		cin >> k;
		a.push_back(k);
	}
	while(s != n){
		m = 999999999;
		for(ll i = 0 ; i < a.size(); i++){
			if(m > a[i]){
				k = i;
				m = a[i];
			}
		}
		s++;
		a[k] = 9999999999;
		cout << k+1 << ' ';
	}
	return 0;
}
