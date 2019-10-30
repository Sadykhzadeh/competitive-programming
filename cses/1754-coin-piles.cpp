// Problem:   Coin Piles (CSES Problem Set 1754)
// Link:      https://cses.fi/problemset/task/1754
// Language:  C++ (C++17)
// Submitted: 2019-10-30 09:49 UTC
// Verdict:   Accepted

typedef long long ll;
typedef unsigned long long ull;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/
#define qq2(x,y) cerr << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define qq(x) cerr << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((x) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define line cerr << endl << endl << "========================" << endl
#define COUT(x) return cout << (x) << endl, 0;
#define stop return 0
using namespace std;
#include <bits/stdc++.h>
ll T1 = clock();
void timer(){rus_lang; ll T2(clock());cerr<<"�����: "<<(T2-T1)/1000.<<" ������."<<endl;
cerr << "�����: ���� ���������";}
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#define endl "\n"
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS

ll t;
ll a, b ;

int main(){
    F_READ;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a < b)swap(a, b);
        if(a > 2 * b){
            cout<<"NO";
        }
        else{
            a %= 3, b %= 3;
            if(a < b) swap(a,b);
            if( (a == 2 && b == 1) || (a == b && b == 0)){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        cout << endl;
    }
}
