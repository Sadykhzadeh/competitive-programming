// Problem:   Fermat's Christmas Theorem (eolymp 1629)
// Link:      https://eolymp.com/problems/1629
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-19 08:51 UTC
// Verdict:   Accepted

#include <iostream>
#include <cstring>

using namespace std;

const int CONSTANTAA = 1000999;
int puk = 0; 
int lol[CONSTANTAA];
bool prov[CONSTANTAA] = {false};

int main(){
     prov[1] = 1;
	for (int i = 2; i < CONSTANTAA; i++){
		if (!prov[i]) lol[puk++] = i;
		for (int j = 0; j < puk && i * lol[j] < CONSTANTAA; j++){
			prov[i * lol[j]] = true;
			if (i % lol[j] == 0) break;
		}
	}
	int n, m;
	while (cin >> n >> m){
		if (n == -1 && m == -1) break;
		int count = 0, sum = 0;
		for (int i = 0; i <= m; i++){
			if (lol[i] >= n && lol[i] <= m){
				count++;
				if (lol[i] % 4 == 1) sum++;
			}
			else if (lol[i] > m) break;
		}
		if (n <= 2 && m >= 2) sum++;
		cout << n << ' ' << m << ' ' << count << ' ' << sum << endl;
	}
     return 0;
}
