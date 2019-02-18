// Problem:   Arrival of the General (Codeforces 144A)
// Link:      https://codeforces.com/contest/144/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-18 10:46 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll n;
vector <ll> a;

int main(){
	ll ma(-99), maa, mi(800), mii;
	cin >> n;
	for(ll i = 1; i <= n; i++){
		ll temp; cin >> temp; a.pb(temp);
		//if(temp > ma)	{ma = temp; maa = i;}
		if(temp <= mi)	{mi = temp; mii = i;}
	}
	ll ans(0);
	//if(maa != 1) ans+=(maa - 1);
	//if(mii != n) ans+=(mii-1);
	mii--;
	for(ll i = mii; i < n-1; i++){
		swap(a[i], a[i+1]);
	}
	for(ll i = 0; i < n; i++){
		if(a[i] > ma)	{ma = a[i]; maa = i;}
		//if(temp <= mi)	{mi = temp; mii = i;}
	}
    //cout<<mii<<" "<<maa<<endl;
	//if(maa != 1) ans+=(maa-1);
	if(maa != 0) ans+=(maa);
	if(mii != n-1) ans+=(n-mii-1);
	cout << ans << endl;
	return 0;
}
