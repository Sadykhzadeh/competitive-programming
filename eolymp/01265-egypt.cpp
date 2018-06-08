// Problem:   Egypt (eolymp 1265)
// Link:      https://eolymp.com/problems/1265
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-06-08 06:48 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
                int a , b , c;
                while(cin >> a >> b >> c){
                                if(a == 0 && b == 0 && c == 0) break;
                                else{
                                                if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) cout << "right" << endl;
                                                else cout << "wrong" << endl;
                                }
                }
                return 0;
}
