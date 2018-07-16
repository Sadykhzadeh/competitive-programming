// Problem:   Adjacent Replacements (Codeforces 1006A)
// Link:      https://codeforces.com/contest/1006/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-16 15:56 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
#define FAST_READ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl "\n"
#define MAXN 2000

using namespace std;



ll n;

ll massiv[MAXN];


int main(){
FAST_READ;
cin>>n;
for(ll i=1;i<=n;i++)
{
  cin>>massiv[i];

}

for(ll i=1;i<=n;i++)
{
  if(massiv[i]%2==0)cout<<massiv[i]-1<<" ";
  else cout<<massiv[i]<<" ";
}

cout<<endl;


return 0;
}
