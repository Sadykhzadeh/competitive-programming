// Problem:   Beautiful Matrix (Codeforces 263A)
// Link:      https://codeforces.com/contest/263/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-09-03 11:30 UTC
// Verdict:   Accepted

#define ll long long
#define elif else if

using namespace std;

#include <iostream>

ll a[24], j, answer;

/*
4 3 2 3 4
3 2 1 2 3
2 1 0 1 2
3 2 1 2 3
4 3 2 3 4
*/

int main(){
    for(ll i = 0 ; i < 24 ; i++){ cin >> a[i]; if(a[i] == 1) j = i;}
    /*switch(j){
        case 0:
        case 4:
        case 20:
        case 24: answer = 4;
        case 1:
        case 3:
        case 5:
        case 9:
        case 15:
        case 19:
        case 21:
        case 23: answer = 3;
        case 6:
        case 8:
        case 10:
        case 14:
        case 16:
        case 18: answer = 2;
        case 7:
        case 11:
        case 13:
        case 17: answer = 1;
    }*/
    if(j == 0 || j == 4 || j == 20 || j == 24) answer = 4;
    elif(j == 1 || j == 3 || j == 5 || j == 9 || j == 15 || j == 19 || j == 21 || j == 23) answer = 3;
    elif(j == 2 || j == 6 || j == 8 || j == 10 || j == 14 || j == 16 || j == 18 || j == 22) answer = 2;
    elif (j!= 12) answer = 1;
    else answer = 0;
    cout << answer;
    return 0;
}
