// Problem:   Candy Box (easy version) (Codeforces 1183D)
// Link:      https://codeforces.com/contest/1183/problem/D
// Rating:    1400   Tags: greedy, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-26 16:46 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> Azer_Sadykhzadeh
Programming Language: C++
*/
#define qq2(x,y) cout << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define COUT(x) return cout << x << endl, 0;
#define stop return 0

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

#include <bits/stdc++.h>
#define endl "\n"

ll q;
ll n;


int main(){
    F_READ;
    cin >> q;
    while(q--){
        cin >> n;
        vector <ll> a;
        set <ll> as;
        for(ll i = 0; i < n; i++){
            ll temp; cin >> temp; a.pb(temp);
        }
        sort(a.begin(), a.end()); ll j = a[0], ans = 1,  sum = 0;
      //  for(ll i = 0; i <a.size(); i++) cout << a[i] << " "; cout << endl;
        a.pb(-1);
        for(ll i = 1; i < n + 1; i++){
            if(a[i] == j) ans++;
            else{
                ll qwe = as.size();
                as.ins(ans);
                if(qwe != as.size()){
                    sum += ans;
                    //qq(ans);
                }
                else{
                    if(ans > 1)
                    while(ans--){
                        ll qweee = as.size();
                        as.ins(ans);
                        if(qweee != as.size()){
                            sum += ans;
                            break;
                            //qq(ans);
                        }
                    }
                }
                ans = 1;
                j = a[i];
            }
        }
        cout << sum << endl;
    }
    stop;
}
