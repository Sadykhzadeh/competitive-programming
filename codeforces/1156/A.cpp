// Problem:   Inscribed Figures (Codeforces 1156A)
// Link:      https://codeforces.com/contest/1156/problem/A
// Rating:    1400   Tags: geometry
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-24 08:56 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n;
vector <ll> figs;
ll sum = 0, lst = 1;

#define pb push_back

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
	cin >> n;
	for(ll i = 0; i < n; i++){
		ll temp; cin >> temp;
		if(lst != 1 && temp != 1){
			return cout << "Infinite" << endl, 0;
		}
		if(temp != 1){
			figs.push_back(temp);
			sum += temp + 1;
			if(i != 0 && i != n - 1) sum += temp + 1;
		}
		lst = temp;
	}
	for(ll i = 0; i < (figs.size() - 1); i++)
        if(figs[i] == 3 && figs[i + 1] == 2) sum--;
    cout << "Finite" << endl << sum << endl;
    return 0;
}
