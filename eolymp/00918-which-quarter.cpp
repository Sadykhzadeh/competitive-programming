// Problem:   Which quarter? (eolymp 918)
// Link:      https://eolymp.com/problems/918
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-18 20:14 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
        double x , y , q ;
        cin >> x >> y;
        if(x == 0 ) q = 0;
        else if(y == 0) q = 0;
        else if(x > 0 && y > 0) q = 1;
        else if(x < 0 && y > 0) q = 2;
        else if(x < 0 && y < 0) q = 3;
        else if(x > 0 && y < 0) q = 4;
        cout << q << endl;
        return 0;
}
