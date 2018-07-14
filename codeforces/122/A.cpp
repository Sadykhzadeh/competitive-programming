// Problem:   Lucky Division (Codeforces 122A)
// Link:      https://codeforces.com/contest/122/problem/A
// Rating:    1000   Tags: brute force, number theory
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-14 08:28 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
    int a[14] = {4 , 7 , 44 , 47 , 74 , 77 , 444 , 447 , 474 , 477 , 744 , 747 , 774 , 777};
    int s; bool d = false;
    cin >> s;
    int i = 0;
    for(int i = 0 ; i < 14;  i++){
      if(a[i] > s) break;
      else{
            if(s % a[i] == 0){ d = true;break;}
      }
    }
    if(d == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
