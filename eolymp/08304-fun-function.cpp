// Problem:   Fun function (eolymp 8304)
// Link:      https://eolymp.com/problems/8304
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-05 18:57 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <cstring>

ll arr[51][51];

ll func(ll x, ll y){
  if(x <= 0 || y <= 0) return 0;
  elif(arr[x][y] != -1) return arr[x][y];
  elif(y >= x) return arr[x][y] = func(x-1,y-2) + func(x-2,y-1) + 2;
  else return arr[x][y] = func(x-2,y-2) + 1;
}

ll x, y;

int main(){
	cin >> x >> y;
	memset(arr, -1, sizeof(arr));
	cout << func(x, y) << endl;
	return 0;
}
