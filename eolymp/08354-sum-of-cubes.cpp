// Problem:   Sum of cubes (eolymp 8354)
// Link:      https://eolymp.com/problems/8354
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-28 07:15 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
#define n 8001
using namespace std;

int main(){  
	unsigned long long  a[n]; 
	int i,j,t;
    for(i=0;i<n; i++){
    	 a[i]=ULLONG_MAX;
    }
    a[0]=0;
      for(i=1;i<n; i++) {
        for(j=1; j<10; j++){
           t=i-j*j*j;
           if(t>=0){
            if(a[t]*10+j<a[i]) a[i] = a[t]*10+j;
           }
            }
        }
      cin>>i;
      cout<<a[i]<<endl;
    return 0;
}
