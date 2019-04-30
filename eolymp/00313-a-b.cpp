// Problem:   A + B (eolymp 313)
// Link:      https://eolymp.com/problems/313
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-30 21:36 UTC
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

string a, b, c;
char tmp;
ll n;

void swap(string & strtmp){
	ll length = strtmp.length();
	for(ll i = 0; i < length / 2; i++){
		tmp = strtmp[i];
		strtmp[i] = strtmp[length - i - 1];
		strtmp[length - i - 1] = tmp;
	}
}

void sum(){
	swap(a); swap(b);
	ll lengthA = a.length(), lengthB = b.length(),
	length = lengthA > lengthB ? lengthA : lengthB, ost = 0;
	for(ll i = 0; i < length; i++){
		if(i < lengthA) ost += a[i] - 48;
		if(i < lengthB) ost += b[i] - 48;
		c += ost % 10 + 48;
		ost /= 10;
	}
	if (ost) c += "1";
	swap(c);
}

int main(){
	cin >> n;
	for(ll i = 0; i < n; i++){
		a.clear(); b.clear(); c.clear();
		cin >> c;
		ll j = 0, lengthC = c.length();
		while(c[j] != '+') a += c[j++];
		j++;
		while(j < lengthC) b += c[j++];
		c.clear(); sum();
		cout << c << endl;
	}
	return 0;
}
