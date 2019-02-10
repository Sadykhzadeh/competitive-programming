// Problem:   Cave Painting (Codeforces 922C)
// Link:      https://codeforces.com/contest/922/problem/C
// Rating:    1600   Tags: brute force, number theory
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-10 08:05 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k;
int main() {
	cin>>n>>k;	
	map<ll,ll>mm;
	for(ll i=1;i <= k ; i++){
		if(mm[n%i]==1)
		{
		  cout<<"No"<<endl;
		  return 0;
		}
		mm[n%i]=1;
	}
	cout<<"Yes"<<endl;
	return 0;
}
