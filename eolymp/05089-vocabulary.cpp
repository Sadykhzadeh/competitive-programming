// Problem:   Vocabulary (eolymp 5089)
// Link:      https://eolymp.com/problems/5089
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 11:24 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include<bits/stdc++.h>

ll n; string temp;
set <string> a;

int main(){
        cin >> n;
        for(ll i = 0; i < n; i++){cin >> temp; a.insert(temp);}
        for(set<string>::iterator i = a.begin(); i != a.end(); i++) cout << *(i) << endl;
    return 0;
}
