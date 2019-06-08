// Problem:   Environmental Contingency (Codeforces 102218E)
// Link:      https://codeforces.com/gym/102218/problem/E
// Language:  C++17 (GCC 7-32)
// Submitted: 2019-06-08 14:35 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int n, x;
string day;
int day_int, suspended;
int a[1000001];

int main() {
	cin >> n >> day >> x;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	if(day == "Monday")
		day_int = 0;
	if(day == "Tuesday")
		day_int = 1;
	if(day == "Wednesday")
		day_int = 2;
	if(day == "Thursday")
		day_int = 3;
	if(day == "Friday")
		day_int = 4;
	if(day == "Saturday")
		day_int = 5;
	if(day == "Sunday")
		day_int = 6;
	suspended = 0;
	for(int i = 0; i < n; i++) {
		if (day_int <= 4 && a[i] >= x) suspended++;
		day_int++;
		day_int %= 7;
	}
	cout << suspended << endl;
	return 0;
}
