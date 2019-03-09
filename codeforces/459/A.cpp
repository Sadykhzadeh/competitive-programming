// Problem:   Pashmak and Garden (Codeforces 459A)
// Link:      https://codeforces.com/contest/459/problem/A
// Rating:    1200   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-09 17:31 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll x1, x2, y, y2;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> x1 >> y >> x2 >> y2;
	ll dx = abs(x1 - x2), dy = abs(y - y2);
	if(dx != 0 && dy != 0){
		if(dx != dy){
			cout << -1 << endl;
		}
		else{
			cout << x1 << " " << y2 << " ";
			cout << x2 << " " << y << endl;
		}
	}
	else{
		cout << x1 + dy << " " << y + dx << " ";
		cout << x2 + dy << " " << y2 + dx << endl;
	}
	return 0;
}
