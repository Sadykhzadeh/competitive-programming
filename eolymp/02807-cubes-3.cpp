// Problem:   Cubes - 3 (eolymp 2807)
// Link:      https://eolymp.com/problems/2807
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-10-02 09:43 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) cout << "Ok";
    else {
        int x[200];
        for ( int i = 65; i <= 122; i++)
            x[i] = 0;
        char c;
        while ((c = cin.get()) != EOF)
            x[c]++;
        for (int i = 'A'; i <= 'z'; i++)
            if (x[i] % 2 != 0)
                c = i;
        cout << c;
    }
    return 0;
}
