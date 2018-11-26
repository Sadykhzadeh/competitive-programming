// Problem:   EOlymp 4848
// Link:      https://eolymp.com/problems/4848
// Language:  C++
// Submitted: 2018-11-26 19:41 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

ll temp;
vector <ll> a;

int main(){
	while(cin >> temp){
		a.pb(temp);
	}
	sort(a.begin(),a.end());
	for(ll i = 0 ; i < a.size(); i++) cout << a[i] << " ";
	return 0;
}

/*typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

ll n, a, b;

ll Mini(ll x){
	vector <ll> mas;
	while(x){ll temp = x % 10; mas.pb(temp);x/=10;}
	sort(mas.begin(),mas.end());
	reverse(mas.begin(),mas.end());
	ll ans = 0;
	for(ll i = 0; i < n; i++){
		ans = ans * 10 + mas[i];
	}
	return ans;
}

ll Maxi(ll x){
	vector <ll> mas;
	while(x){ll temp = x % 10; 
	if(temp)mas.pb(temp); else mas.pb(10);
	x/=10;}
	sort(mas.begin(),mas.end());
	ll ans = 0;
	for(ll i = 0; i < n; i++){
		if(mas[i] == 10) ans *= 10;
		else ans = ans * 10 + mas[i];
	}
	return ans;
}

int main(){
	cin >> n;
	cout << Maxi(n) + Mini(n) << endl;
	return 0;
}*/
