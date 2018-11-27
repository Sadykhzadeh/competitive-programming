// Problem:   POJ 1674
// Link:      http://poj.org/problem?id=1674
// Language:  C++
// Submitted: 2018-11-27 09:17 UTC
// Verdict:   Accepted

#include <iostream>

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;



ll i, n, tests, cnt, u, temp;

ll m[10010];

int main(){
	cin >> tests;
	while(tests--){
		cin >> n;
		for(i = 1; i <= n; i++) cin >> m[i];
	
	cnt = 0;
    for(i = 1; i <= n; i++)
      if (m[i] != i){
        u = i;
        while(m[u] != u){
          temp = m[u]; m[u] = u;
          u = temp;    cnt++;
        }
        cnt--;
      }
      cout << cnt << endl;
	}
	return 0;
}
