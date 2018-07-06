// Problem:   Helpful Maths (Codeforces 339A)
// Link:      https://codeforces.com/contest/339/problem/A
// Rating:    800   Tags: greedy, implementation, sortings, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-06 16:25 UTC
// Verdict:   Accepted

#include <iostream>
#include <string>

#define elif else if

using namespace std;

int main(){
	string n; cin >> n;
	int n1(0),n2(0),n3(0);
	for(int i  = 0 ; i < n.length(); i++){
		 switch(n[i]){
		     case '1': n1++; break;
		     case '2': n2++; break;
		     case '3': n3++; break;
		     case '\n': break;
		 }
	}
	int cnt = 1;
	for(int i = 0 ; i < n1; i++){ if(cnt == 1){cout << 1; cnt = 0;} else cout << '+' << 1;}
	for(int i = 0 ; i < n2; i++){ if(cnt == 1){cout << 2; cnt = 0;} else cout << '+' << 2;}
	for(int i = 0 ; i < n3; i++){ if(cnt == 1){cout << 3; cnt = 0;} else cout << '+' << 3;}
	return 0;
}
