// Problem:   Bracket sequence (eolymp 5327)
// Link:      https://eolymp.com/problems/5327
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-16 20:43 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <string>

string a;
ll ans(0);
bool hello(false);
char temp;

int main(){
    cin >> a;
    //cout << "YEE" << endl;
    for(ll i = 0; i < a.length(); i++){
            if(a[i] == '(') ans++;
            else ans--;
            if(ans < 0){hello = true; break;}
    }
    if(hello || ans){cout << "NO";} else cout <<"YES";
    cout << endl;
    return 0;
}
