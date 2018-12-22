// Problem:   Permutation (eolymp 4079)
// Link:      https://eolymp.com/problems/4079
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-22 19:56 UTC
// Verdict:   Accepted

typedef int ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

int n, q, u, v ;
int m[100010][17];
int a[100010], b[100010];
int mas[100010][17];

void Build_RMQ_Array(int *b){
  int i, j;
  for (i = 1; i <= n; i++) mas[i][0] = b[i];
  for (j = 1; 1 << j <= n; j++)
    for (i = 1; i + (1 << j) - 1 <= n; i++)
      mas[i][j] = min(mas[i][j - 1], mas[i + (1 << (j - 1))][j - 1]);
}

int RMQ(int i, int j){
  int k = 0;
  while ((1 << (k + 1)) <= j - i + 1) k++;
  return min(mas[i][k],mas[j - (1<<k) + 1][k]);
}


int main(){
    scanf("%d %d",&n,&q);
    for(int i = 1; i <= n; i++) scanf("%d",&b[i]);
    for(int i = 1; i <= n; i++) a[b[i]] = i;
    Build_RMQ_Array(a);
    for(int i = 0; i < q; i++){
        scanf("%d %d",&u,&v);
        printf("%d\n",RMQ(u,v));
    }
    return 0;
}
