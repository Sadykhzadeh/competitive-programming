// Problem:   Move zeroes (eolymp 4760)
// Link:      https://eolymp.com/problems/4760
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-03 07:40 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	long long  n , a[10000];
	cin >> n;
	for(long long i = 0 ; i < n ; i++) cin >> a[i];
	vector < long long > b(n);
	int j = 0;
	for(long long i = 0 ; i < n ; i++){
		int temp = a[i];
		if(temp != 0){
			b[j] = temp;
			j++;
		}
	}
	for(int i = 0 ; i < n ; i++) cout << b[i] << " ";
	return 0;
	
	
}
