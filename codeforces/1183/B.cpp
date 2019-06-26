// Problem:   Equalize Prices (Codeforces 1183B)
// Link:      https://codeforces.com/contest/1183/problem/B
// Rating:    900   Tags: math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-26 15:47 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> Azer_Sadykhzadeh
Programming Language: C++
*/
#define qq2(x,y) cout << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define COUT(x) return cout << x << endl, 0;
#define stop return 0

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

#include <bits/stdc++.h>
#define endl "\n"

ll q;
ll n, k;

int main(){
    F_READ;
	cin >> q;
	while(q--){
		ll a[1100], qeiruywoeiruyskldjfhskadjfhcmzxvbxmb = 9999999999999, vbbvxcnbvzxcnjksfkksj = 0;
		cin >> n >> k;
		for(ll i = 0; i < n; ++i){
			cin >> a[i];
			if(a[i] + k < qeiruywoeiruyskldjfhskadjfhcmzxvbxmb) qeiruywoeiruyskldjfhskadjfhcmzxvbxmb = a[i] + k;
		}
		for(ll i = 0; i < n; ++i)
			if(abs(qeiruywoeiruyskldjfhskadjfhcmzxvbxmb - a[i]) > k){
				vbbvxcnbvzxcnjksfkksj = 1;
				break;
			}
		if(vbbvxcnbvzxcnjksfkksj) cout << "-1" << endl;
		else cout << qeiruywoeiruyskldjfhskadjfhcmzxvbxmb << endl;
	}
	return 0;
}
