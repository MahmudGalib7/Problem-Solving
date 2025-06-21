#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAXN = 200005;
vector<int> graph[MAXN];
bool visited[MAXN];

int bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    int size = 1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : graph[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
                size++;
            }
        }
    }
    return size;
}

int main()
{
    int n, m;
    cin >> n >> m;

    // Build graph
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int maxComponentSize = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            int compSize = bfs(i);
            maxComponentSize = max(maxComponentSize, compSize);
        }
    }

    cout << maxComponentSize << endl;
    return 0;
}
