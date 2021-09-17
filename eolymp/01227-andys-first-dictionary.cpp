// Problem:   Andy's First Dictionary (eolymp 1227)
// Link:      https://eolymp.com/problems/1227
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2021-09-17 13:56 UTC
// Verdict:   Accepted

#include <iostream>
#include <set>
#include <cstring>
#define ll long long
using namespace std;

set<string> ans;
char s[201];

int main() {
	scanf("%[^a-zA-Z]", s);
	while (scanf("%[a-zA-Z]", s) == 1){
		for(ll i = 0; i < strlen(s); i++) s[i] = tolower(s[i]);
		ans.insert(s);
		scanf("%[^a-zA-Z]", s);
	}
	for (set<string>::iterator iter = ans.begin(); iter != ans.end(); ++iter) printf("%s\n", (*iter).c_str());
	return 0;
}
