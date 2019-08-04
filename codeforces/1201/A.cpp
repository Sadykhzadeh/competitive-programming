// Problem:   Important Exam (Codeforces 1201A)
// Link:      https://codeforces.com/contest/1201/problem/A
// Rating:    900   Tags: implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-08-04 17:21 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
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
#define MOD 1000000007LL
#define line cout << endl << endl << "========================" << endl
#define COUT(x) return cout << x << endl, 0;
#define stop return 0
using namespace std;

#include <bits/stdc++.h>
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

struct ALLALAALALALALALAL{
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int E = 0;
};
int n, m; string s;
ll sdfsdkfjsdlkfjsdkljfklsdjfklsdfklsjflsjflsdjfkl = 0, b;
int main(){
    F_READ;
    cin >> n >> m;
    vector<ALLALAALALALALALAL>t(m);
    for(ll i = 0; i < n; i++){
        cin >> s;
        for(ll j = 0; j < m; j++){
            if(s[j] == 'A') t[j].A++;
            if(s[j] == 'B') t[j].B++;
            if(s[j] == 'C') t[j].C++;
                if(s[j] == 'D') t[j].D++;
                    if(s[j] == 'E') t[j].E++;
        }
    }
    

    for (int i = 0; i < m; i++){
        n = max(t[i].A, max(t[i].B, max(t[i].C, max(t[i].D, t[i].E))));
        cin >> b;
        sdfsdkfjsdlkfjsdkljfklsdjfklsdfklsjflsjflsdjfkl += b * n;
    }
    cout << sdfsdkfjsdlkfjsdkljfklsdjfklsdfklsjflsjflsdjfkl << endl;
	return 0;
}
