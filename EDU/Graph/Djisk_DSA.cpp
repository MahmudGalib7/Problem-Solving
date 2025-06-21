#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <limits>
#include <tuple>

using namespace std;

const int INF = numeric_limits<int>::max();

void dijkstra(int source, vector<vector<pair<int, int>>> &adj, vector<int> &dist)
{
    int n = adj.size();
    dist.assign(n, INF);
    dist[source] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, source});

    while (!pq.empty())
    {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u])
            continue;

        for (auto &[v, weight] : adj[u])
        {
            if (dist[u] + weight < dist[v])
            {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{
    vector<tuple<int, int, int>> edges = {{0, 1, 2}, {0, 2, 4}, {1, 2, 1}, {1, 3, 7}, {2, 4, 3}, {3, 4, 2}};
    int n = 0;
    for (auto &[from, to, weight] : edges) {
        n = max(n, max(from, to));
    }
    n++;

    vector<vector<pair<int, int>>> adj(n);
    for (auto &[from, to, weight] : edges) {
        adj[from].push_back({to, weight});
    }

    int source = 0;
    vector<int> dist;
    dijkstra(source, adj, dist);
    
    cout << "Shortest distances from vertex " << source << ":\n";
    for (int i = 0; i < n; i++) {
        cout << "To vertex " << i << ": ";
        if (dist[i] == INF) {
            cout << "INF (no path)\n";
        } else {
            cout << dist[i] << "\n";
        }
    }
    
    return 0;
}