// Problem:   Handshake (eolymp 1532)
// Link:      https://eolymp.com/problems/1532
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-03-29 22:35 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define coutt(x) cout<<(x)<<endl;return 0;

using namespace std;

#include <bits/stdc++.h>

ll arr[60], n;

void f(ll n){       ll i, j;
  arr[0] = arr[1] = 1;
  for(i = 2; i <= n; i++){
    for(j = 0; j < i; j++) arr[i] += (arr[j] * arr[i - j - 1]);
  }
}

int main(){
    f(50);
    while(cin >> n){
        cout << arr[n/2] << endl;
    }
    return 0;
}
