// Problem:   Persistent Number (eolymp 8377)
// Link:      https://eolymp.com/problems/8377
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-05 19:17 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

ll n, res(0);


int p(int x) {return (x < 10) ? x : p(x / 10) * (x % 10);}
int main(){
while(scanf("%d",&n) == 1){
  int cnt = 0;
  while(n > 9){
    cnt++;
    n = p(n);
}
cout << cnt << endl;
}
return 0;
}
