// Problem:   POJ 2387
// Link:      http://poj.org/problem?id=2387
// Language:  G++
// Submitted: 2018-12-16 08:47 UTC
// Verdict:   Accepted

#define MAX 5010
#define INF LLONG_MAX
#define ll long long

using namespace std;

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

ll t, n, b, e, w;
ll used[MAX], dist[MAX];
vector<vector<pair<ll, ll> > > g;

void Relax(ll v, ll to, ll cost)
{
  if (dist[to] > dist[v] + cost)
    dist[to] = dist[v] + cost;
}

int Find_Min(void)
{
  ll i, v, min = INF;
  for(i = 1; i <= n; i++)
    if (!used[i] && (dist[i] < min)) min = dist[i], v = i;
  if (min == INF) return -1;
  return v;
}

void Dijkstra(){
  memset(used,0,sizeof(used));
  memset(dist,0x3F,sizeof(dist));
  dist[1] = 0;
  for(ll i = 1; i < n; i++){
    ll v = Find_Min();
    if (v == -1) break;
    used[v] = 1;
    for(ll j = 0; j < g[v].size(); j++)
    {
      ll to = g[v][j].first;
      ll cost = g[v][j].second;
      if (!used[to]) Relax(v,to,cost);
    }
  }
}

int main(){
  scanf("%d %d",&t,&n);
  g.resize(n+1);
  for(ll i = 0; i < t; i++){
    scanf("%d %d %d",&b,&e,&w);
    g[b].push_back(make_pair(e,w));
    g[e].push_back(make_pair(b,w));
  }
  Dijkstra();
  printf("%d\n",dist[n]);
  return 0;
}
