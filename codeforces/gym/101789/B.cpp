// Problem:   Бобры-Зомби (Codeforces 101789B)
// Link:      https://codeforces.com/gym/101789/problem/B
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-08-31 19:35 UTC
// Verdict:   Accepted

#define ll long long
#define elif else if
#define FAST_READ ios_base::sync_with_stdio(0);

using namespace std;

#include <iostream>
#include <map>

map <ll,ll> s;
ll cnt = 0;
ll n, temp;  

int main(){
    FAST_READ
    cin >> n;
    for(ll i = 1; i <= n; i++){
      cin >> temp;
      for(ll j = 2;j * j <= temp; j++){
        while(temp % (j*j) == 0) temp /= (j * j);
      }
      cnt += s[temp];
      s[temp]++;
    }
    cout << cnt << endl;
    return 0;
}
