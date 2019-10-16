// Problem:   Interesting fun of Yura (eolymp 8324)
// Link:      https://eolymp.com/problems/8324
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-10-16 20:46 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include<bits/stdc++.h>

ll n, t;
set <ll> a;

int main(){
    a.clear();
    cin >> t;
    while(t--){
        cin >> n;
        if(a.find(n)!=a.end())cout << "Yes ";
        else cout << "No ";
        a.insert(n);
       cout << a.size() << endl;
    }
    return 0;
}
