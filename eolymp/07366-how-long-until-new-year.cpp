// Problem:   How long until New Year? (eolymp 7366)
// Link:      https://eolymp.com/problems/7366
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-03 20:47 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    cout<<n/86400<<" "<<(n%86400)/3600<<" "<<((n%86400)%3600)/60<<" "<<n%60;
    return 0;
}
