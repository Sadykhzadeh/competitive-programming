// Problem:   Kefa and First Steps (Codeforces 580A)
// Link:      https://codeforces.com/contest/580/problem/A
// Rating:    900   Tags: brute force, dp, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-09-16 13:50 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>
#include <cmath>

ll n, temp, answer = 1;
vector <ll> a;
ll b[100000];

int main(){
	cin >> n;
	for(ll i = 0 ; i < n; i++){
		cin >> temp; a.pb(temp);
	}
	b[0] = 1;
	for(ll i = 1; i < n; i++){
        if(a[i-1] <= a[i]) b[i] = b[i-1] + 1;
        elif(a[i-1] > a[i]) b[i] = 1;
        answer = max(answer ,b[i]);
    }
    cout << answer << endl;
	return 0;
}
