// Problem:   Shoemaker Problem (eolymp 1591)
// Link:      https://eolymp.com/problems/1591
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2024-02-05 12:30 UTC
// Verdict:   Accepted

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareJobs(const pair<int, pair<int, int>>& a, const pair<int, pair<int, int>>& b) {
    if(a.first * b.second.first == b.first * a.second.first) {
        return a.second.second < b.second.second;
    }
    return a.first * b.second.first < b.first * a.second.first;
}

int main(){
    int n, duration, penalty;
    while(scanf("%d", &n) == 1) {
        vector<pair<int, pair<int, int>>> a;
        for (int i = 1; i <= n; i++){
            cin >> duration >> penalty;
            a.push_back(make_pair(duration, make_pair(penalty, i)));
        }

        sort(a.begin(), a.end(), compareJobs);
        cout << a[0].second.second;
        for (int i = 1; i < n; i++){
            cout << " " << a[i].second.second;
        }
        cout << endl;
    }
    return 0;
}
