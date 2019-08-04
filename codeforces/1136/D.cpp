// Problem:   Nastya Is Buying Lunch (Codeforces 1136D)
// Link:      https://codeforces.com/contest/1136/problem/D
// Rating:    1800   Tags: greedy
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-08-04 12:50 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
#define FAST_READ ios_base::sync_with_stdio(0);
#define in freopen("input.txt", "r", stdin);
#define out freopen("output.txt", "w", stdout);
//#define ll long long
#define debt(x,y)cout<<"#x = "<<(x)<<" and "<<"#y = "<<(y)<<endl;
#define deb(x)cout<<"#x = "<<(x)<<endl;
#define COUT(n, a) cout<< fixed << setprecision(a) << n<<endl
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl "\n"
#define arr(a,n) for(ll i=1;i<=n;i++) cout<<a[i]<<" "; cout << "\n";
#define vecc(a,n) for(ll i=0;i<n;i++) cout<<a[i]<<" "; cout << "\n";
#define CURTIME() cerr << clock() * 1.0 / CLOCKS_PER_SEC << endl
#define DTIME(ccc) __begin = clock(); ccc; cerr<<"Time of work = "<<(clock()-__begin)/CLOCKS_PER_SEC<<endl;
#define MAXN 400010
 
using namespace std;
long long used[MAXN], massiv[MAXN], n,m, cnt, res, cntt[MAXN];
 
vector<long long>adj[MAXN];
int main(){
	cnt = res = 0;
FAST_READ;
	cin >> n >> m;
	for(long long i=1;i<=n;i++){
		cin>>massiv[i];
	}
for(long long i=1;i<=m;i++)
{
  long long x,y;
  cin>>x>>y;
  if(y==massiv[n])used[x]=1;
  adj[y].pb(x);
}
for(long long i=n-1;i>=1;i--)
{
 if(used[massiv[i]] && cnt==cntt[massiv[i]])
 {
   res++;
 }
 else
 {
   cnt++;
   for(auto ii:adj[massiv[i]])
   {
	 cntt[ii]++;
   }
  }
}
cout<<res<<endl;
return 0;
}
