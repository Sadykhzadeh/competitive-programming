// Problem:   Ostap and Grasshopper (Codeforces 735A)
// Link:      https://codeforces.com/contest/735/problem/A
// Rating:    800   Tags: implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-09-01 11:27 UTC
// Verdict:   Accepted

#define ll long long
#define elif else if
#define FASTER ios_base::sync_with_stdio(false);

using namespace std;

#include <iostream>
#include <string>
#include <cmath>        //for abs(a, b) = |a - b|

bool answer;
ll ne_nujnaya_peremennaya , k, cnt , cnt1;
string m;

int main(){
    FASTER cin.tie(0); cout.tie(0);
    cin >> ne_nujnaya_peremennaya >> k;
    cin >> m;
    for(ll i = 0; i < m.length() ; i++){
        if(m[i] == 'G') cnt = i;
        elif(m[i] == 'T'){ cnt1 = i;}
    }
    if(cnt1 > cnt){
        for(ll i = cnt; i < m.length(); i+=k){
            if(m[i]=='#') break;
            elif(m[i]=='T') answer = true;
        }
    }
    elif(cnt1 <= cnt){
        for(ll i = cnt; i >= 0; i-=k){
            if(m[i]=='#') break;
            elif(m[i]=='T') answer = true;
        }
    }
    if(answer == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
