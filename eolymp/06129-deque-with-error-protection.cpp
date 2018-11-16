// Problem:   Deque with error protection (eolymp 6129)
// Link:      https://eolymp.com/problems/6129
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-16 21:09 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

deque <ll> a;
string s;
ll k;

int main(){
      while(1 + 1 == 2){
            cin >> s;
            if(s == "push_front"){cin >> k; a.push_front(k); cout << "ok" << endl;}
            elif(s == "push_back"){cin >> k; a.pb(k); cout << "ok" << endl;}
            elif(s == "pop_front" && a.size() != 0){cout << a.front() << endl; a.pop_front();}
            elif(s == "pop_back" && a.size() != 0){ cout << a.back() << endl; a.pop_back();}
            elif(s == "front" && a.size() != 0)cout << a.front() << endl;
            elif(s == "back" && a.size() != 0) cout << a.back() << endl;
            elif(s == "size") cout << a.size() << endl;
            elif(s == "clear"){a.clear(); cout << "ok" << endl;}
            elif(s == "exit") {cout << "bye" << endl; break;}
            else cout << "error" << endl;
      }
      return 0;
}
