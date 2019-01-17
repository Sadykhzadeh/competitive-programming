// Problem:   Cow Cotillion (eolymp 8666)
// Link:      https://eolymp.com/problems/8666
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-17 17:26 UTC
// Verdict:   Accepted

typedef unsigned long long ll;
#define FAST_READ ios_base::sync_with_stdio(false)
#define elif else if
#define pb push_back
#define ins insert
//#define ll double

using namespace std;

#include <bits/stdc++.h>

ll t;
int k;


int main(){
    cin >> t;
    for(ll i = 0; i < t; i++){
        int hello(0);
        //memset(a,' ', sizeof(a));
        cin >> k;
        string a;
        cin >> a;
        bool sig=false;
        if(k % 2 == 1){cout << "illegal" << endl; continue;}
        for(int j = 0; j < k; j++){
            //cout << a << endl;
            if(a[j] == '>') hello++;
            elif(a[j] == '<') hello--;
            if(hello < 0) {sig= 1; break;}
        }
        if(sig!=0) cout << "illegal" << endl;
        else if(hello>0 || hello<0) cout << "illegal" << endl;
        else cout<<"legal"<<endl;
    }
    return 0;
}
