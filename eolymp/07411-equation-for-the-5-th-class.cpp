// Problem:   Equation for the 5-th class! (eolymp 7411)
// Link:      https://eolymp.com/problems/7411
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-20 10:37 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
	int x , xpos;
	char in[5];
	cin >> in;
	bool plus=(in[1]=='+');
	if (in[0]=='x') xpos=1;
	else if (in[2]=='x') xpos=2;
	 else xpos=3;
	switch (xpos){
	case 1: x=in[4]-'0'-plus*(in[2]-'0')+(!plus)*(in[2]-'0'); break;
	case 2: x=(!plus)*(in[0]-in[4])+plus*(in[4]-in[0]); break;
	case 3: x=in[0]-'0'+plus*(in[2]-'0')-(!plus)*(in[2]-'0'); break;
	}
	cout << x << endl;
	return 0;
}
