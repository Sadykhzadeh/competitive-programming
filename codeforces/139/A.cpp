// Problem:   Petr and Book (Codeforces 139A)
// Link:      https://codeforces.com/contest/139/problem/A
// Rating:    1000   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-27 11:19 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int sum(int n[7]){
  int result = 0;
  for(int i=  0 ; i < 7;i++) result += n[i];
  return result;
}

int main() {
  int a; cin >> a;
  int n[7];
  for(int i = 0 ; i < 7 ; i++) cin >> n[i];
  while(sum(n) < a)if(sum(n) < a) a-=sum(n);
  if(a == 0) cout << 7 << endl;
  else{
  int i(0);
  while(true){
  		if(a - n[i] > 0) a -= n[i];
      else{cout << i+1 << endl; break;}
      i++;
  }
  }
  return 0;
}
