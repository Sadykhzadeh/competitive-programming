// Problem:   Three Friends (Codeforces 1272A)
// Link:      https://codeforces.com/contest/1272/problem/A
// Rating:    900   Tags: brute force, greedy, math, sortings
// Language:  C++17 (GCC 7-32)
// Submitted: 2019-12-12 13:57 UTC
// Verdict:   Accepted

#include<bits/stdc++.h>
#define ll long long
using namespace std; 
int main()
{
    ll t,a[3];
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        a[0]++;
        a[2]--;
        ll sum=(a[1]-a[0])+(a[2]-a[0])+(a[2]-a[1]);
        if(sum<0) cout<<0<<endl;
        else	cout<<sum<<endl;
    } 
}
