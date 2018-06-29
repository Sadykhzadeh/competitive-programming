// Problem:   String Task (Codeforces 118A)
// Link:      https://codeforces.com/contest/118/problem/A
// Rating:    1000   Tags: implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-29 11:52 UTC
// Verdict:   Accepted

#include <iostream>
#include <cctype>
using namespace std;

int main() {
  char a;
  while(cin >> a){
    if(a=='a'|| a=='i'||a=='y'||a=='o'||a=='e'||a=='u' || a=='A'||a=='I'||a=='Y'||a=='O'||a=='E'||a=='U')continue;
    else{
      cout <<'.'<<(char)tolower(a);
    }
  }
  return 0;
}
