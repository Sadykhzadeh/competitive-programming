// Problem:   Palindrome (eolymp 8359)
// Link:      https://eolymp.com/problems/8359
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-03-25 13:48 UTC
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

using namespace std;

#include <bits/stdc++.h>

string s,s1;
ll n, i, j, len;
ll a[1002][1002];

ll maxi(ll a, ll b){
    if(a >= b) return a;
    else return b;
}

void print(ll i, ll j){
    if (i > j) return;
    if (i == j){
        s1 += s[i];
        return;
    }
    if(s[i] == s[j]){
        s1 += s[i];
        print(i + 1, j - 1);
        s1 += s[j];
        return;
    }
    if(a[i][j] == a[i + 1][j]) print(i + 1, j);
    else print(i, j - 1);
}



int main(){
    cin >> s;
    n = s.length();
    s = ' ' + s;
    for(i = 1; i <= n; i++) a[i][i] = 1;
    for(len = 2; len <= n; len++)
        for(i = 1; i <= n + 1 - len; i++){
            j = i + len - 1;
            if(s[i] == s[j]) a[i][j] = a[i + 1] [j - 1] + 2;
            else a[i][j] = maxi(a[i + 1][j], a[i][j - 1]);
    }
    print(1, n);
    cout << n - s1.length() << endl;
    return 0;
}
