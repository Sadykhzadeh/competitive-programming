// Problem:   Cash Machine (eolymp 138)
// Link:      https://eolymp.com/problems/138
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-04 19:16 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	int x , i = 0;
	cin >> x;
	if(x % 10 != 0) cout << -1 << endl;
	else{
	while(true){
		if(x >= 500){
			 x -= 500;
			 i++;
		}
		else break;
	}
	while(true){
		if(x >= 200){
			 x -= 200;
			 i++;
		}
		else break;
	}
	while(true){
		if(x >= 100){
			 x -= 100;
			 i++;
		}
		else break;
	}
	while(true){
		if(x >= 50){
			 x -= 50;
			 i++;
		}
		else break;
	}
	while(true){
		if(x >= 20){
			 x -= 20;
			 i++;
		}
		else break;
	}
	while(true){
		if(x >= 10){
			 x -= 10;
			 i++;
		}
		else break;
	}
	cout << i << endl;
}
	return 0;
}
