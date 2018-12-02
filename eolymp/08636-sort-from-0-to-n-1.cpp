// Problem:   Sort from 0 to n - 1 (eolymp 8636)
// Link:      https://eolymp.com/problems/8636
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-02 08:46 UTC
// Verdict:   Accepted

typedef int ll;
#define elif else if
#define pb push_back

using namespace std;
#include<bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <vector>

int a[1000010], n;
vector< pair<int, int> >nuj;

int main(){
    //ios_base::sync_with_stdio(0);
	cin >> n;
	for(int i = 0; i < n; i++){
      scanf("%d",&a[i]);
	}
	for(ll i = 0; i < n; i++){
		while(a[i] != i){
            nuj.pb(make_pair(i, a[i]));
			swap(a[i],a[a[i]]);
		}
	}
	cout << (ll)nuj.size() << endl;
	for(ll i = 0 ; i < (ll)nuj.size(); i++){
        printf("%d %d\n",nuj[i].first,nuj[i].second);
	}
	return 0;
}
