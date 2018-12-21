// Problem:   Maximum (eolymp 4473)
// Link:      https://eolymp.com/problems/4473
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-21 09:37 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

#define MNOGO 100010
#define LOG_MNOGO 17
ll mas[MNOGO][LOG_MNOGO];
ll a[MNOGO];
ll n, u , v;

ll f(ll n)
{
  if(n==1)return 0;
  return f(n/2)+1;
}

int main() {
	scanf("%lld",&n);
	for(ll i = 0 ; i < n; i++){
		scanf("%lld",&a[i]);
	}
	for (ll i = 0; i < n; i++) mas[i][0] = a[i];
	for (ll j =1;(1LL << j )<=n; j++){
    for (ll i = 0; i + (1LL <<( j-1))  < n; i++)
    {
      mas[i][j] = max(mas[i][j - 1], mas[i + (1 << (j - 1))][j - 1]);}
    }
    ll zapros; scanf("%lld",& zapros);
    while(zapros--){
    	scanf("%lld %lld",&u,&v);
    	ll temp, k(0);
		if(u>v)swap(u,v);
		u--;
		v--;
		k=f(v-u+1);
		printf("%lld\n",max(mas[u][k],mas[v - (1<<k) + 1][k]));
    }
	return 0;
}
