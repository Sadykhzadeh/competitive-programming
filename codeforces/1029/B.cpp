// Problem:   Creating the Contest (Codeforces 1029B)
// Link:      https://codeforces.com/contest/1029/problem/B
// Rating:    1200   Tags: dp, greedy, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-08-30 08:19 UTC
// Verdict:   Accepted

#define ll long long
#define elif else if

using namespace std;

#include <bits/stdc++.h>

ll n, val, ans, a[300000];

int main(){
	cin >> n;
	for(ll i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	val = ans = 1;
	for(ll i = 1; i < n ; i++){
		if(a[i] <= 2 * a[i-1]) val++;
		else { ans = max(ans, val); val = 1;}
	}
	ans = max(ans,val);
	cout << ans << endl;
	return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,val,ans,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,a+n);
	val=1;
	ans=1;
	for(i=1;i<n;i++)
	{
		if(a[i]<=2*a[i-1])
			val++;
		else
		{
			ans=max(ans,val);
			val=1;
		}
	}
	ans=max(ans,val);
	printf("%d",ans);
	return 0;
}*/
