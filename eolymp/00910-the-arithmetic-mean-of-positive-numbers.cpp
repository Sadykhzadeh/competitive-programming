// Problem:   The arithmetic mean of positive numbers (eolymp 910)
// Link:      https://eolymp.com/problems/910
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-08-03 14:20 UTC
// Verdict:   Accepted

#include <iostream>
#include <iomanip>

using namespace std;

double sum = 0;
int y = 0;

int main(){
     double n;
     cin >> n;
     for(double i = 0 ; i < n ; i++){
          double temp;
          cin >> temp;
          if(temp > 0){ sum += temp; y++;}
     }
     if(y == 0) cout <<  "Not Found";
     else cout << fixed << setprecision(2) << sum / y;
     return 0;
}
