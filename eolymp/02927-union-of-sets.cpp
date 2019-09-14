// Problem:   Union of Sets (eolymp 2927)
// Link:      https://eolymp.com/problems/2927
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 11:59 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;
#include<bits/stdc++.h>

ll test, n, temp;
set<ll> a;

int main(){
    cin >> test;
    while(test--){
        cin >> n;while(n--){cin >> temp; a.insert(temp);}
    }
    cout << a.size();
    return 0;
}
