// Problem:   Reverse the graph (eolymp 10048)
// Link:      https://eolymp.com/problems/10048
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2021-06-10 10:18 UTC
// Verdict:   Accepted

#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <set>
#include <stack>
#include <iterator>
#include <algorithm>
#include <climits>
#include <ctime>
#include <fstream>

using namespace std;

vector<int> dist;
vector<vector<pair<int, int> > > graph;

int n;

void bfs(int start)
{

    dist = vector<int>(n + 1, INT_MAX);
    dist[start] = 0;
    deque<int> dq;
    dq.push_back(start);
    while (!dq.empty())
    {
        int v = dq.front();
        dq.pop_front();

        for (int i = 0; i < graph[v].size(); i++)
        {
            int to = graph[v][i].first;
            int w = graph[v][i].second;

            if (dist[to] > dist[v] + w){
                dist[to] = dist[v] + w;
                if (w == 1){
                    dq.push_back(to);
                }
                else{
                    dq.push_front(to);
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a, b, c, d, e, f, j = 0, i = 0, k, m, l;
    bool isSolved = true;

    cin>>n>>m;

    graph.resize(n + 1);

    for (i = 0; i < m; i++){
        cin>>a>>b;

        graph[a].push_back(make_pair(b, 0));
        graph[b].push_back(make_pair(a, 1));

    }

bfs(1);

if (dist[n] == INT_MAX){
    cout<<-1<<endl;
}
else{
    cout<<dist[n]<<endl;
}

    return 0;
}
