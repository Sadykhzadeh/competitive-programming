// Problem:   Arithmetic mean for figure skaters (eolymp 7368)
// Link:      https://eolymp.com/problems/7368
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-03 18:14 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>
#include <iomanip>

vector <double> a;
double n, m, temp;

int main(){
      cin >> n >> m;
      for(ll t = 0; t < m; t++){
            a.erase(a.begin(), a.end());
            for(ll j = 0; j < n; j++){
                  cin >> temp;
                  a.pb(temp);
            }
            double ma = -12456, mi = 987363245;
            for(ll j = 0 ; j < a.size(); j++){
                  if(a[j] < mi) mi = a[j];
                  if(a[j] > ma) ma = a[j];
            }
            for(ll j = 0; j < a.size(); j++){
                  if(a[j] == mi) a[j] = -19921992;
                  if(a[j] == ma) a[j] = -19921992;
            }
            double res = 0; ll p = 0;
            for(ll j = 0; j < a.size(); j++){
                  if(a[j] != -19921992) {res += a[j];p++;}
            }
            cout << fixed << setprecision(2) << res / p << ' ';
      }
      return 0;
}
