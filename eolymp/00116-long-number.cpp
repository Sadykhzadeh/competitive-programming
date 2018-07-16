// Problem:   Long number (eolymp 116)
// Link:      https://eolymp.com/problems/116
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-16 19:24 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int kolvo(int x){
    int i = 0;
    while(x){
        i++;
        x/=10;
    }
    return i;
}

int main(){
    int a , b , c , l , j , mn;
    bool prov = true;
    cin >> a >> c;
    b = a;
    while(prov){
        if(a % c == 0) prov = false;
        else{
            b++;
            l = kolvo(b); mn=1;
            for( j=1; j <= l ;j++) mn=mn*10;
            a=(a % c)*mn+b;
        }
    }
    cout << b << endl;
    return 0;
}
