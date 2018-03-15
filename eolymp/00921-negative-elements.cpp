// Problem:   Negative elements (eolymp 921)
// Link:      https://eolymp.com/problems/921
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-15 08:57 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
    double n , a[10000] , sum = 0 , j = 0 ;
    cin >> n;
    for( int i = 0 ; i < n ; i++) cin >> a[i];
    for( int i = 0 ; i < n ; i++){
         if(a[i] < 0 ) {
                 sum+=a[i];
                 j++;
                 }
         
    }
    cout << j;
    cout << fixed << setprecision(2) << " " << sum << endl;
    return 0;
}
