// Problem:   Sparse Tables (eolymp 691)
// Link:      https://eolymp.com/problems/691
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-22 20:07 UTC
// Verdict:   Accepted

typedef int ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

int a[100001], u, v, n, m;
int mas[100001][17];

void swap_f(int &u, int &v){if(u > v) swap(u, v);}

void RMQ_nlogn(){
  for(int i = 1; i <= n; i++) mas[i][0] = i;
  for(int j = 1; (1 << j) <= n; j++)
    for(int i = 1; i + (1 << j) - 1 <= n; i++)
      if(a[mas[i][j - 1]] < a[mas[i + (1 << (j - 1))][j - 1]]) mas[i][j] = mas[i][j - 1];
      else mas[i][j] = mas[i + (1 << (j - 1))][j - 1];
}

int q(int i, int j){
  int k = (int)(log(1.0*j - i + 1) / log(2.0)), res = mas[i][k];
  if (a[mas[j - (1<<k) + 1][k]] < a[res]) res = mas[j - (1<<k) + 1][k];
  return res;
}

int main(){
    scanf("%d %d",&n,&m);scanf("%d %d %d",&a[1],&u,&v);
    for(int i = 2; i <= n; i++) a[i] = (23 * a[i-1] + 21563) % 16714589;
    RMQ_nlogn();
    int ans(0);
    for(int i = 1; i <= m; i++){
        int u1 = u, v1 = v;
        swap_f(u1,v1);
        ans = a[q(u1,v1)];
        if(i < m){
            u = ((17*u + 751 + ans + 2*i) % n) + 1;
            v = ((13*v + 593 + ans + 5*i) % n) + 1;
        }
    }
    printf("%d %d %d\n",u,v,ans);
    return 0;
}
