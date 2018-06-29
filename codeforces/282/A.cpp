// Problem:   Bit++ (Codeforces 282A)
// Link:      https://codeforces.com/contest/282/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-29 16:31 UTC
// Verdict:   Accepted

#include <iostream>            
#include <string>
using namespace std;

int main(){
    int n , x = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        if(a=="++X" || a=="X++") x++;
        else if(a=="--X" || a=="X--") x--;
    }
    cout << x << endl;
    return 0;
}
