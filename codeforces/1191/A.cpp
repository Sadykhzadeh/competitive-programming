// Problem:   Tokitsukaze and Enhancement (Codeforces 1191A)
// Link:      https://codeforces.com/contest/1191/problem/A
// Rating:    800   Tags: brute force
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-08-04 13:02 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

#define ll long long

ll n;
#define elif else if

int main(){
    cin >> n;
    if(n % 4 == 0){
        return cout << 1 << " " << 'A' << endl, 0;
    }
    elif(n % 4 == 1){
        return cout << 0 << " " << 'A' << endl, 0;
    }
    elif(n % 4 == 2){
        return cout << 1 << ' ' << 'B' << endl, 0;
    }
    else{
        return cout << 2 << " A" << endl, 0;
    }
}
