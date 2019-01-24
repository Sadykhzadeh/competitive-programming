// Problem:   Odd divisors (eolymp 2863)
// Link:      https://eolymp.com/problems/2863
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-24 19:06 UTC
// Verdict:   Accepted

#include <iostream>
#include <vector>

using namespace std;

int main(){
                int a , i = 1;
                cin >> a;
                while(a % 2 == 0) a /= 2;
                for(int i = 1 ; i <= a ; i+=2){
                                if(a % i == 0) cout << i << endl;
                }
                 return 0;
}
