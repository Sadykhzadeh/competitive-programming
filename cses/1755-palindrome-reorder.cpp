// Problem:   Palindrome Reorder (CSES Problem Set 1755)
// Link:      https://cses.fi/problemset/task/1755
// Language:  C++ (C++17)
// Submitted: 2020-03-13 09:47 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define elif else if

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    int a[26] = {0};
    for(ll i = 0; i < s.length(); i++){
        a[s[i] - 65]++;
    }
    ll nech = 0, nech_id = -1;
    for(ll i = 0; i < 26; i++){
        if(a[i]){
            if(a[i] % 2) nech++, nech_id = i;
        }
        if(nech > 1) return cout << "NO SOLUTION" << endl, 0;
    }
    for(ll i = 0; i < 26; i++){
        if(a[i]){
            if(a[i] % 2 == 0){
                for(ll qwe = 0; qwe < a[i] / 2; qwe++){
                    cout << char(i + 65);
                }
            }
            elif(a[i] > 1){
                for(ll qwe = 0; qwe < a[i] / 2; qwe++){
                    cout << char(i + 65);
                }
            }
        }
    }
    if(nech == 1){
        cout << char(nech_id + 65);
    }
    for(ll i = 25; i >= 0; i--){
        if(a[i]){
            if(a[i] % 2 == 0){
                for(ll qwe = 0; qwe < a[i] / 2; qwe++){
                    cout << char(i + 65);
                }
            }
            elif(a[i] > 1){
                for(ll qwe = 0; qwe < a[i] / 2; qwe++){
                    cout << char(i + 65);
                }
            }
        }
    }
    cout << endl;
    return 0;
}
