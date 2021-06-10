// Problem:   Rails (eolymp 1776)
// Link:      https://eolymp.com/problems/1776
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2021-06-10 09:38 UTC
// Verdict:   Accepted

#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<stack>
#include<iterator>
#include<algorithm>
#include<ctime>
#include<fstream>

using namespace std;

stack<int> st;

int main(){
    int a,b,c,d,e,f,j = 0,i = 0, k, n, m, l, x, cur, ok;
    bool isSolved = true;
    
    while(scanf("%d",&n),n)
    {
    while(scanf("%d",&x),x)
    {
        cur = ok = 1;
        while(!st.empty()) st.pop();
        for(i = 1; i < n; i++)
    {
for(;cur <= x; cur++) st.push(cur);
      if (st.top() != x) ok = 0;
      st.pop();
      scanf("%d",&x);
    }
     printf(ok ? "Yes\n" : "No\n");
  }
  printf("\n");
}


   
    return 0;
}
