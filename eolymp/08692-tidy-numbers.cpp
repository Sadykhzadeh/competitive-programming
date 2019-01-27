// Problem:   Tidy Numbers (eolymp 8692)
// Link:      https://eolymp.com/problems/8692
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-27 13:48 UTC
// Verdict:   Accepted

typedef unsigned long long ll;
#define FAST_READ ios_base::sync_with_stdio(false)
#define elif else if
#define pb push_back
#define ins insert
//#define ll long double

using namespace std;

#include <bits/stdc++.h>

ll t, n;

bool check(vector<ll>a)
{
  for(ll i=0;i<(ll)a.size()-1;i++)
  {
    if(a[i]>a[i+1])return 0;
  }
  return 1;
}


int main(){
    cin >> t;
    for(ll cnt = 1; cnt <= t; cnt++){
        cin >> n;
        cout << "Case #" << cnt << ": ";
        vector <ll> a;
        ll k = n;
        while(k){
            ll temp = k % 10;
            a.pb(temp);
            k /= 10;
        }
        reverse(a.begin(), a.end());
        while(!check(a))
        {
          for(ll i = 0; i < a.size() - 1; i++){
            if(a[i] > a[i+1]){
                a[i]--;
                for(ll j = i + 1; j < a.size(); j++) a[j] = 9;
                break;
            }
         }
        }
        k = 0;
        while(a[k] == 0) k++;
        for(ll i = k; i < a.size(); i++){
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
