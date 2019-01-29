// Problem:   The results of the Olympiad (eolymp 1953)
// Link:      https://eolymp.com/problems/1953
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-29 16:50 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;
#include <bits/stdc++.h>

int main(){
    int a[130], b[130], n;
    bool f[130] = {false};
    cin >> n;
    for(int i = 0; i < n; i++){cin >> a[i]; b[i] = a[i];}
    sort(a, a + n); reverse(a, a + n);
    for(int i = 0; i < n; i++){
        int ans;
        for(int j = 0; j < n; j++){
            if(a[i] == b[j] && f[j] == false){ans = j; f[j] = true; break;}
        }
        ans++;
        cout << ans << ' ';
    }
    return 0;
}
