 
vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int> bfs_traversal;
    vector<bool> vis(V, false);
    for (int i = 0; i < V; ++i) {
        if (!vis[i]) {
            queue<int> q;
            vis[i] = true;
            q.push(i);
            while (!q.empty()) {
                int g_node = q.front();
                q.pop();
                bfs_traversal.push_back(g_node);
                for (auto it : adj[g_node]) {
                    if (!vis[it]) {
                        vis[it] = true;
                        q.push(it);
                    }
                }
            }
        }
    }
    return bfs_traversal;
}

void DFS(Graph const &graph, int v, vector<bool> &discovered)
{
    // mark the current node as discovered
    discovered[v] = true;
 
    // print the current node
    cout << v << " ";
 
    // do for every edge (v, u)
    for (int u: graph.adjList[v])
    {
        // if `u` is not yet discovered
        if (!discovered[u]) {
            DFS(graph, u, discovered);
        }
    }
}