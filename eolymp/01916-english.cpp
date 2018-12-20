// Problem:   English (eolymp 1916)
// Link:      https://eolymp.com/problems/1916
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-20 21:26 UTC
// Verdict:   Accepted

typedef long long ll;
    #define elif else if
    #define pb push_back

    using namespace std;

    #include <bits/stdc++.h>

    string word;
    long double k = 0, k1 = 0;

    int main(){
        cin >> word;
        for(ll i = 0; i < word.length(); i++){
            if(word[i] == 'i' || word[i] == 'a' || word[i] == 'e' || word[i] == 'o' || word[i] == 'u'){
                k++;
            }
            elif(word[i] == 'y') k+=0,5;
            else k1++;
        }
        ll ans = 0;
        ll p = word.length();
        if(k <= k1) while(k <= k1){
            k++; k1--; ans++;
        }
        elif(k == k1) ans = 1;
        cout << ans << endl;
        return 0;
    }
