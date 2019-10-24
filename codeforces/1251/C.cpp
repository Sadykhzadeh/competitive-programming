// Problem:   Minimize The Integer (Codeforces 1251C)
// Link:      https://codeforces.com/contest/1251/problem/C
// Rating:    1600   Tags: greedy, two pointers
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-10-24 16:41 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define elif else if

ll n;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	while(n--){
		string s;
		ll aa = 0, bb = 0, a[300015], b[300015];
		cin >> s;
		for(ll i=0; i < s.length(); i++){
			if((s[i] - '0') % 2 == 0){
				a[++bb] = s[i] - '0';
			}
			else{
				b[++aa] = s[i] - '0';
			}
		}
		ll p1 = 1, p2 = 1;
		for(ll i = 0; i < s.length(); i++){
			if(p1 <= bb && p2 <= aa){
				if(a[p1] < b[p2]) cout<<a[p1++];
				else cout << b[p2++];
			}
			elif(p1 <= bb) cout << a[p1++];
			else cout << b[p2++];
		}
		cout<<endl;
	}
}
