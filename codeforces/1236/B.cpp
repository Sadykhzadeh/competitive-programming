// Problem:   Alice and the List of Presents (Codeforces 1236B)
// Link:      https://codeforces.com/contest/1236/problem/B
// Rating:    1500   Tags: combinatorics, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-10-17 14:59 UTC
// Verdict:   Accepted

#include<bits/stdc++.h>
using namespace std;

long long mod = (long long)1e9 + 7;
long long solve(long long x, long long y) 
{ 
    long long res = 1;    
    x = x % mod; 
    while (y > 0) 
    { 
     
        if (y & 1) 
       {
       		res = (res*x) % mod; 
       }
        y = y>>1;
        x = (x*x) % mod;   
    } 
    return res; 
} 
int main(){
    long long n,m;
    cin>>n>>m;
    long long ans=solve(2,m);
    ans--;
    ans=solve(ans,n);  
    cout<<ans;

    
}
