// Problem:   I've Been Everywhere, Man (eolymp 7546)
// Link:      https://eolymp.com/problems/7546
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-02 22:07 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include<bits/stdc++.h>

ll test, n; string temp;
set <string> a;

int main(){
    cin >> test;
    while(test--){
        a.clear();
        cin >> n;
        for(ll i = 0; i < n; i++){cin >> temp; a.insert(temp);}
        cout << (a.size()) << endl;
    }
    return 0;
}
