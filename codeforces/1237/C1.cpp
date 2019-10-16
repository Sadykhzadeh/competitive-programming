// Problem:   Balanced Removals (Easier) (Codeforces 1237C1)
// Link:      https://codeforces.com/contest/1237/problem/C1
// Rating:    1700   Tags: constructive algorithms, geometry, greedy
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-10-16 16:06 UTC
// Verdict:   Accepted

typedef long long ll;
typedef unsigned long long ull;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/
#define qq2(x,y) cerr << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define qq(x) cerr << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((x) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define line cerr << endl << endl << "========================" << endl
#define COUT(x) return cout << (x) << endl, 0;
#define stop return 0
using namespace std;
#include <bits/stdc++.h>
ll T1 = clock();
void timer(){rus_lang; ll T2(clock());cerr<<"Время: "<<(T2-T1)/1000.<<" секунд."<<endl;
cerr << "Автор: Азер Садыхзаде";}
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#define endl "\n"
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS
const long long qweqweqwe = 1e18;

vector<pair<ll, pair<ll, ll>>> arr;
ll n;
map<ll, ll> used;

int main(){
    F_READ;
	cin >> n;

	for (int i = 0; i < n; i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		arr.pb(make_pair(a, make_pair(b, c)));
	}
	for (ll i = 0; i < n; i++){
		if (used[i])
			continue;
		ll dist = qweqweqwe;
		ll ind = -1;
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			if (used[j])
				continue;
			ll x1 =arr[i].first;
			ll y1 = arr[i].second.first;
			ll z1 = arr[i].second.second;
			ll x2 =arr[j].first;
			ll y2 = arr[j].second.first;
			ll z2 = arr[j].second.second;
			ll d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2);
			if (d < dist) {
				dist = d;
				ind = j;
			}
		}
		cout << i + 1 << " " << ind + 1 << "\n";
		used[i] = 1;
		used[ind] = 1;
	}
	timer();
	stop;
}
