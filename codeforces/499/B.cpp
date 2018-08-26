// Problem:   Lecture (Codeforces 499B)
// Link:      https://codeforces.com/contest/499/problem/B
// Rating:    1000   Tags: implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-08-26 09:01 UTC
// Verdict:   Accepted

/*
Code is more that some bytes in a file...
                                    -Azer Sadykhzadeh
*/

#define ll long long 
#define elif else if

using namespace std;

#include <iostream> //cin & cout
#include <string>   //word
#include <cmath>    //minimal & maximal

ll m , n;
string a[10000], a1[10000] , ce[10000];

void lolXD(string a , string b){
    if(a.size() > b.size()){
        cout <<  b;
    }
    else cout << a;
    cout << ' ';
}


int main(){
    cin >> m >> n;
    for( ll i = 0 ; i < n; i++) cin >> a[i] >> a1[i];
    for( ll i = 0 ; i < m ; i++) cin >> ce[i];
    for(ll i = 0 ; i < m ; i++){
        for(ll j = 0 ; j < n ; j++){
            if(ce[i] == a[j]){ lolXD(a[j], a1[j]);}
        }
    }
    return 0;
}
