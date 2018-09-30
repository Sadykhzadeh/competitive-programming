// Problem:   Simple Calculator (eolymp 8319)
// Link:      https://eolymp.com/problems/8319
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-09-30 20:45 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>
#include <iomanip>

ll m , n;
char a;

int main(){
      cin >> m >> a >> n;
      switch(a){
            case '+': cout << m + n << endl; break;
            case '-': cout << m - n << endl; break;
            case '*': cout << m * n << endl; break;
            case '/': if(n != 0) cout << m / n << endl; break;
      }
      return 0;
}
