// Problem:   From adjacency list to adjacency matrix (eolymp 3982)
// Link:      https://eolymp.com/problems/3982
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-12 18:06 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>
#include <cstring>

ll n, m, temp;

int main(){
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> m;
        if(!m){for(ll i = 0; i < n; i++){ cout << 0 << ' ';} cout << endl;}
        else{
            ll a[109]; memset(a,0,sizeof(a));
            for(ll i = 0 ; i < m; i++){
                    cin >> temp; a[temp-1] = 1;
            }
            for(ll i = 0 ; i < n; i++)cout << a[i] << ' ';
            cout << endl;
        }
    }
    return 0;
}
