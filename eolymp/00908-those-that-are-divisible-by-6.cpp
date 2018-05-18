// Problem:   Those that are divisible by 6 (eolymp 908)
// Link:      https://eolymp.com/problems/908
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-18 10:28 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
                int n , a[10000] , kolvo = 0 , summa = 0;
                cin >> n;
                for(int i = 0 ; i < n ;i++) cin >> a[i];
                for(int i = 0 ; i < n ;i++){
                                if(a[i] % 6 == 0 && a[i] > 0){
                                                summa += a[i];
                                                kolvo++;
                                }
                }
                cout << kolvo << " " << summa << endl;
                return 0;
}
