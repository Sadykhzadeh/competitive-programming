// Problem:   Replacement (eolymp 4892)
// Link:      https://eolymp.com/problems/4892
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2021-09-15 10:37 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
#define ll long long
#define F_READ                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(0)
using namespace std;

// all required variables
ll n;
vector <ll> arr(1000010), ans(1000010);
multiset<ll> mul;


int main() {
  F_READ;
  
  // input all nessesary data
  cin >> n;
  for (ll i = 0; i < n; i++) cin >> arr[i];
  
  for (ll i = n - 1; i >= 0; i--) {
    while (*mul.begin() <= arr[i] && mul.size()) mul.erase(mul.begin());
    if (mul.size()) ans[i] = *mul.begin();
    mul.insert(arr[i]);
  }

  //outputing answer
  for (ll i = 0; i < n; i++) 
	cout << ans[i] << " ";
  return cout << endl, 0;
}
