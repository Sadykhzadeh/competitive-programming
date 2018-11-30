// Problem:   Counting sort (eolymp 2327)
// Link:      https://eolymp.com/problems/2327
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-30 17:41 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>
const ll RANGE = 1000450;
 
ll m[100010], n, v;
ll maxi = - LLONG_MAX;
int main(){
	scanf("%lld",&n);
	memset(m,0,sizeof(m));
	for(ll i = 0; i < n; i++){
		scanf("%lld",&v);
                if(v > maxi) maxi = v;
		m[v]++;
	}
	for(ll i = 0; i <= maxi; i++) for(ll j = 0; j < m[i]; j++)printf("%lld ",i);
	printf("\n");
	return 0;
}
