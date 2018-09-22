// Problem:   Space Formula (Codeforces 1046C)
// Link:      https://codeforces.com/contest/1046/problem/C
// Rating:    1400   Tags: greedy
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-09-22 12:17 UTC
// Verdict:   Accepted

typedef long long ll;
#define pll pair<ll,ll>
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define res(i,a,b) for(ll i=a;i<b;i++)
#define elif else if
#define FAST_READ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#include <bits/stdc++.h>
vector<ll> vec;
ll a[200002],b[200002],n,k,ans=n,g,mx,s=1;
int main()
{FAST_READ
cin>>n>>k;
res(i,0,n)cin>>a[i];
res(i,0,n)cin>>b[i];
mx=b[0]+a[k-1];
g=n-1;
ll l=0;
while(l<n)
{
if(l!=k-1)
{if(b[g]+a[l]>mx)vec.pb(a[l]+b[s++]),l++;
else vec.pb(a[l]+b[g]),l++,g--;}
else vec.pb(mx),l++;}
sort(vec.begin(),vec.end());
for(int i=n-1;i>=0;i--)
{if(vec[i]==mx){ans=i;break;}}

cout<<n-ans<<endl;
}
