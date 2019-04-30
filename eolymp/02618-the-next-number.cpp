// Problem:   The next number (eolymp 2618)
// Link:      https://eolymp.com/problems/2618
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-30 21:13 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007

using namespace std;

#include <bits/stdc++.h>

string str;
char tmp;
ll length, ost;

void swap(){
	length = str.length();
	for(ll i = 0; i < length / 2; i++){
		tmp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = tmp;
	}
}

int main(){
	cin >> str;
	swap();
	ost = 1;
	for(ll i = 0; i < length; i++){
		ost = ost + (str[i] - 48);
		str[i] = (ost % 10) + 48;
		ost /= 10;
	}
	if(ost) str += "1";
	swap();
	cout << str << endl;
}
