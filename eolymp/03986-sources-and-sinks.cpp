// Problem:   Sources and sinks (eolymp 3986)
// Link:      https://eolymp.com/problems/3986
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-19 17:42 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <cstring>
#include <vector>

ll k, a;
bool n[110], m[110];

int main(){
    memset(n, false, sizeof(n));
    memset(m, false, sizeof(m));
    cin >> k;
    for(ll i = 0; i < k; i++){
        for(ll j = 0; j < k; j++){
            cin >> a;
            if(a){
                n[i] = true;
                m[j] = true;
            }
        }
    }
    ll ans_cnt = 0, ans_cnt_1 = 0;
    vector <ll> a; vector <ll> b;
    for(ll i = 0; i < k; i++){
        if(!n[i]){ ans_cnt++; a.pb(i);}
    }
    for(ll i = 0; i < k; i++){
        if(!m[i]){ ans_cnt_1++; b.pb(i);}
    }
    
    cout << ans_cnt_1 << ' ';for(ll i = 0; i < b.size(); i++)cout << b[i]+1 << ' ';
    cout << endl;
    cout << ans_cnt << ' ';for(ll i = 0; i < a.size(); i++)cout << a[i]+1 << ' ';
    cout << endl;
    return 0;
}
