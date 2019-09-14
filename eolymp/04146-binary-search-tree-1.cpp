// Problem:   Binary Search Tree 1 (eolymp 4146)
// Link:      https://eolymp.com/problems/4146
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 11:59 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

string s; ll n;
set <ll> a;

int main(){
	while(cin >> s){
		if(s == "insert"){cin >> n; a.insert(n);}
		elif(s == "delete"){cin >> n; a.erase(n);}
		elif(s == "exists"){ cin >> n;
			if(a.find(n) == a.end()) cout << "false" << endl;
			else cout << "true" << endl;
		}
	}
	return 0;
}
