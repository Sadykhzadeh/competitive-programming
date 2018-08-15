// Problem:   Simple Question (eolymp 1464)
// Link:      https://eolymp.com/problems/1464
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-08-15 17:48 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;
    
int a;

int main(){
    while(cin >> a){
        if(a == 0) break;
        else{
            int temp = 0;
            if(a >= 1){
                for(int i = 1; i <= a; i++) temp += i;
            }
            else{
                for(int i = a; i <= 1; i++) temp += i;
            }
            cout << temp << endl;
        }
    }
}
