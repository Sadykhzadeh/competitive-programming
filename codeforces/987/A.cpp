// Problem:   Infinity Gauntlet (Codeforces 987A)
// Link:      https://codeforces.com/contest/987/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-29 16:54 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define coutt(x) cout<<(x)<<endl;return 0;

using namespace std;

#include <bits/stdc++.h>

ll n;
bool s[6] = {false};


int main(){
    cin >> n;
    for(ll i = 0; i < n; i++){
        string temp;
        cin >> temp;
        if(temp == "purple") s[0] = true;
        elif(temp == "green") s[1] = true;
        elif(temp == "blue") s[2] = true;
        elif(temp == "orange") s[3] = true;
        elif(temp == "red") s[4] = true;
        elif(temp == "yellow") s[5] = true;
    }
    cout << 6 - n << endl;
    if(s[0] == false) cout << "Power" << endl;
    if(s[1] == false) cout << "Time" << endl;
    if(s[2] == false) cout << "Space" << endl;
    if(s[3] == false) cout << "Soul" << endl;
    if(s[4] == false) cout << "Reality" << endl;
    if(s[5] == false) cout << "Mind" << endl;
    return 0;
}
