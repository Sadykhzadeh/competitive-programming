// Problem:   Arrangement of Contest (eolymp 6260)
// Link:      https://eolymp.com/problems/6260
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-30 17:41 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll m[260];
char s[50]; ll n;

int main(){
	cin >> n;
	while(n--){
		cin >> s;  m[s[0]]++;
	}
	char i;
	for(i = 'A'; i <= 'Z'; i++) if (m[i] == 0) break;
	cout << i - 'A' << endl;
	return 0;
}
