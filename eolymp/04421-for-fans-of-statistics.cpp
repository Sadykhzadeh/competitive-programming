// Problem:   For fans of statistics (eolymp 4421)
// Link:      https://eolymp.com/problems/4421
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-10-21 22:06 UTC
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

ll i, n, q, l, r, x;

struct city{
	int people, num;
	city(int people = 0, int num = 0) { this->people = people; this->num = num; }
}a[70001];

ll f(city a, city b){
	if(a.people == b.people) return a.num < b.num;
	return a.people < b.people;
}

int Main_F(int l, int r, int x){
	ll Left = lower_bound(a, a + n, city(x, l), f) - a;
	ll Right = upper_bound(a, a + n, city(x, r), f) - a;
	return Left < Right;
}

int main() {
	F_READ;
	cin >> n;
	for(i = 0; i < n; i++){
        cin >> a[i].people;
        a[i].num = i + 1;
    }
	sort(a, a + n, f);
	cin >> q;
	while(q--){
		cin >> l >> r >> x;
		cout << Main_F(l, r, x);
	}
	return cout << endl, 0;
}
