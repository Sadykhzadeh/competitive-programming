// Problem:   Ближайшее нечётное (Codeforces 101789A)
// Link:      https://codeforces.com/gym/101789/problem/A
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-06 18:38 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>

#define elif else if

using namespace std;

int brazz(int x){
    int i= 0;
    while(x){
        i++; x/=10;
    }
    return i;
}

int main(){
    int a;
    cin >> a;
    if(a == 0) cout << 1;
    else{
    int b = a - 1, c = a + 1;
    if(brazz(b) > brazz(c)) cout << c;
    elif(brazz(b) < brazz(c)) cout <<b;
    else{
        cout << min(b,c);
    }}
    cout << endl;
    return 0;
}
