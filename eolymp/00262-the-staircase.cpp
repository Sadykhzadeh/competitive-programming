// Problem:   The staircase (eolymp 262)
// Link:      https://eolymp.com/problems/262
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2024-01-14 10:01 UTC
// Verdict:   Accepted

#include<iostream>
using namespace std;

int main(){
    int i,j=0,a,b,mas[1001],max;
    cin>>a;
    for(i=1;i<=a;i++)
    cin>>mas[i];
    cin>>b;
    mas[0]=0;
    mas[a+1]=0;
    
    for(i=1;i<=a+1;i++){
    max=mas[j];
    for( j=i-b;j<i;j++){
        if(j<0)j=0;
        if(max<mas[j]) max=mas[j];
        }
    mas[i]=max+mas[i];                
    }
        cout<<mas[a+1]<<endl;
    
}
