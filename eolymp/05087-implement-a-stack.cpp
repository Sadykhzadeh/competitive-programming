// Problem:   Implement a stack (eolymp 5087)
// Link:      https://eolymp.com/problems/5087
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-15 09:11 UTC
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
	ll k; cin >> k;
	while(k--){    
	n = 0;
	cin >> s;
	    if(s == "1"){ cin >> n; a.push(n); }
	    elif(s ==  "2"){ cout << a.top() << endl; a.pop(); }
    }
}
