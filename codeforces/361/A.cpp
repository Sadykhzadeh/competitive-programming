// Problem:   Levko and Table (Codeforces 361A)
// Link:      https://codeforces.com/contest/361/problem/A
// Rating:    800   Tags: constructive algorithms, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-28 09:45 UTC
// Verdict:   Accepted

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n , k , cnt(1);
    vector <int> v;
    cin >> n >> k;
    while(cnt<n){
        if(k==0) v.push_back(0);
        else if(k>0){v.push_back(1); k--;}
        cnt++;
    }
    v.push_back(k);
    for(int i = 0; i < n; i++){
        cnt=0;
        for(int j=i;cnt<n;j=(j+1)%n){   
            cout<<v[j]<<" ";
            cnt++;
        }    
        cout<<endl;
    }
    return 0;
}
