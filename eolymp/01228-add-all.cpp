// Problem:   Add All (eolymp 1228)
// Link:      https://eolymp.com/problems/1228
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-10-16 20:51 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll n, temp, ans(0);
vector <ll> s;
multiset <ll> a;

int main(){
    cin >> n;
    ll sum=0;
    for(ll i = 0; i < n; i++){cin >> temp; a.insert(temp);}
    while(a.size()>1)
    {
      ll one=*a.begin();
      a.erase(a.begin());
      ll two=*a.begin();
      a.erase(a.begin());
      a.insert(one+two);
      sum+=(one+two);
    }
    cout<<sum<<endl;
    return 0;
}
