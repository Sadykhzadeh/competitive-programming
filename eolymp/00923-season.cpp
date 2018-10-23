// Problem:   Season (eolymp 923)
// Link:      https://eolymp.com/problems/923
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-23 13:46 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
int n;
cin >> n;
if(n == 1 || n == 2 || n == 12 ) cout << "Winter";
else if(n == 3 || n == 4 || n == 5) cout << "Spring";
else if(n == 6 || n == 7 || n == 8) cout << "Summer";
else if(n == 9 || n == 10 || n == 11) cout << "Autumn";
return 0;
}
