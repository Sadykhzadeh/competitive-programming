// Problem:   Rock, Paper, or Scissors? (eolymp 1215)
// Link:      https://eolymp.com/problems/1215
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-25 13:22 UTC
// Verdict:   Accepted

#include <iostream>

/*
R (Камень)
S (Ножницы)
P (Бумага)

*/

#define ll unsigned long long
#define elif else if

using namespace std;

int a , n;

int main(){
     cin >> a;
     for(int j = 0 ; j < a; j++){
          cin >> n;
          int temp = 0 , temp1 = 0;
          for(int i = 0 ; i < n ; i++){
               char a , b;
               cin >> a >> b;
               if(a == 'R' && b == 'S') temp++;
               elif(a == 'S' && b == 'P') temp++;
               elif(a == 'P' && b == 'R') temp++;
               elif(a == 'R' && b == 'P') temp1++;
               elif(a == 'S' && b == 'R') temp1++;
               elif(a == 'P' && b == 'S') temp1++;
          }
          if(temp > temp1) cout << "Player 1";
          elif(temp < temp1) cout << "Player 2";
          else cout << "TIE";
          cout << endl;
     }
     return 0;
}
