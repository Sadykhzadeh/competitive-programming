// Problem:   Tournament (eolymp 3002)
// Link:      https://eolymp.com/problems/3002
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 08:05 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
                long long n;
                cin >> n;
                long long sum = 0 , sum2 = 0;
                for(int i = 0 ; i < n ; i++){
                                long long temp , temp2;
                                cin >> temp >> temp2;
                                if(temp>temp2)sum++;
                                else if(temp<temp2)sum2++;
                }
                if(sum > sum2) cout << 1 << endl;
                else if(sum < sum2) cout << 2 << endl;
                else if(sum == sum2) cout << 0 << endl;
                return 0;
}
