// Problem:   Replacement (eolymp 4892)
// Link:      https://eolymp.com/problems/4892
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-04 08:28 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int massiv[1000010];
int ans[1000010];
int main() {
	int n;
	cin>>n;
	multiset<ll>nuj;
	for(int i=1;i<=n;i++)
	{
	  cin>>massiv[i];
	}
	for(ll i=n;i>=1;i--)
	{
	  while(nuj.size()!=0 && *nuj.begin()<=massiv[i])nuj.erase(nuj.begin());
	  if(nuj.size()!=0)ans[i]=*nuj.begin();
	  nuj.insert(massiv[i]);
	}
	for(ll i=1;i<=n;i++)cout<<ans[i]<<" ";
	return 0;
}
