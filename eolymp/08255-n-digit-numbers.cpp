// Problem:   n-digit numbers (eolymp 8255)
// Link:      https://eolymp.com/problems/8255
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-11 19:16 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int summa(int x){
                int ans = 0;
                while(x){
                                int temp = x % 10;
                                ans += temp;
                                x /= 10;
                      }
                return ans;
}

int main(){
        int a , b;
        cin >> a >> b;
        if(a == 1) cout << b << endl;
        else{
                for(int i = pow(10 , a - 1) ; i < pow(10 , a) ; i++){
                                if(summa(i) == b) cout << i << endl;
                }
        }
        return 0;
}
