// Problem:   Restricted RPS (Codeforces 1245B)
// Link:      https://codeforces.com/contest/1245/problem/B
// Rating:    1200   Tags: constructive algorithms, dp, greedy
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-11-01 15:29 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>   
using namespace std;

#define elif else if
#define ll long long

  int main()
  {
      ll t;
      cin >> t;
      for (ll i = 0; i < t; ++i){
          ll n, NumOfWins, check = 0;
          bool isWin = false;
          cin >> n;
          NumOfWins = ceil(n / 2.0);
          ll a, b, c;
          cin >> a >> b >> c;
          string t;
          for (ll j = 0; j < n; ++j){
              char temp;
              cin >> temp;
              if(temp == 'S' && a > 0){
                  t += "R";
                  --a;
                  ++check;
              }
              elif(temp == 'R' && b > 0){
                  t += "P";
                  --b;
                  ++check;
              }
              elif(temp == 'P' && c > 0){
                  t += "S";
                  --c;
                  ++check;
              }
              else t += "Q";
              if(check == NumOfWins) isWin = true;
          }
          if(isWin){
              for (ll j = 0; j < n; ++j){
                  if (t[j] == 'Q'){
                      if (a > 0)
                      {
                          t[j] = 'R';
                          --a;
                      }
                      else if (b > 0)
                      {
                          t[j] = 'P';
                          --b;
                      }
                      else if (c > 0)
                      {
                          t[j] = 'S';
                          --c;
                      }
                  }
              }
              cout << "YES\n" << t << '\n';
          }
          else cout << "NO\n";
      }
      return 0;
  }
