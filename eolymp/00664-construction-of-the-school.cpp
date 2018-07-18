// Problem:   Construction of the School (eolymp 664)
// Link:      https://eolymp.com/problems/664
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-18 16:33 UTC
// Verdict:   Accepted

#include <iostream>
#include <vector>

using namespace std;

int main(){
     long long n , a[100020];
     cin >> n;
     for(int i= 0 ; i <n ; i++) cin >> a[i];
     if(n % 2 == 0) cout << a[n/2-1];
     else cout << a[n/2];
     return 0;
}
