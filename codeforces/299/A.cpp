// Problem:   Ksusha and Array (Codeforces 299A)
// Link:      https://codeforces.com/contest/299/problem/A
// Rating:    1000   Tags: brute force, number theory, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-08-29 14:02 UTC
// Verdict:   Accepted

#define Hello_world ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long
#define elif else if

using namespace std;

#include <iostream>
#include <algorithm>


ll n, a[100010], s;

int main (){
    Hello_world;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	for (int i = 1; i < n; i++) if((a[i]%a[0]) == 0) s++;	
	if(s == n-1) cout << a[0];
	else cout << -1;
	return 0;
}
