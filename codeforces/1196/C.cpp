// Problem:   Robot Breakout (Codeforces 1196C)
// Link:      https://codeforces.com/contest/1196/problem/C
// Rating:    1500   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-07-24 16:31 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/
#include <bits/stdc++.h>
using namespace std;

struct MYCORD
{
	ll xMIN, xMAX, yMAX, yMIN;
	MYCORD()
	{
		xMAX = yMAX = 100000;
		xMIN = yMIN = -100000;
	}
};

vector<MYCORD> my_vector;

int main(){
	ll q, n;
	cin >> q;
	while(q--){
		cin >> n;
		while(my_vector.size()) my_vector.pop_back();
		for(ll i = 0; i < n; i++) {
			ll x, y, f1, f2, f3, f4;
			cin >> x >> y >> f1 >> f2 >> f3 >> f4;
			MYCORD c;
			if(!f1) c.xMIN = x;
			if(!f2) c.yMAX = y;
			if(!f3) c.xMAX = x;
			if(!f4) c.yMIN = y;
			my_vector.push_back(c);
		}
		MYCORD ans;
		for(auto i : my_vector){
			ans.xMIN = max(ans.xMIN, i.xMIN);
			ans.xMAX = min(ans.xMAX, i.xMAX);
			ans.yMAX = min(ans.yMAX, i.yMAX);
			ans.yMIN = max(ans.yMIN, i.yMIN);
		}
		if(ans.xMIN > ans.xMAX || ans.yMIN > ans.yMAX) cout << 0 << endl;
		else cout << 1 << " " << ans.xMIN << " " << ans.yMIN << endl;
	}
	return 0;
}
