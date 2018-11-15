// Problem:   Simple Stack (eolymp 6122)
// Link:      https://eolymp.com/problems/6122
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-15 09:08 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <stack>
#include <string>

stack <ll> a;
string s;
ll n;

int main(){
	while(true){    
	n = 0;
	cin >> s;
	    if(s == "push"){ cin >> n; a.push(n); cout << "ok" << endl;}
	    elif(s == "back"){ cout << a.top() << endl;} 
	    elif(s == "size"){ cout << a.size() << endl;}
	    elif(s ==  "pop"){ cout << a.top() << endl; a.pop(); }
	    elif(s == "clear"){ while(!a.empty()) a.pop(); cout << "ok" << endl;}
	    elif(s == "exit"){ cout << "bye" << endl; return 0;}
    }
}
