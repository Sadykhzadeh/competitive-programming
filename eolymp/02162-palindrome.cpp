// Problem:   Palindrome (eolymp 2162)
// Link:      https://eolymp.com/problems/2162
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-27 07:04 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
 
using namespace std;


int main()
{
    string stroka;
    getline(cin,stroka);
    string neww="";
    for(long long i=0;i<stroka.size();i++)
    {
        if(stroka[i]!=' ')neww+=stroka[i];
    }
    if(equal(neww.begin(),neww.end(),neww.rbegin()))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
