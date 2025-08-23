#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj(1000);
bool vis[1000];
int cnt = 1;
void dfs(int src)
{
    vis[src] = true;
    for (int child : adj[src])
    {
        if (!vis[child])
        {
            dfs(child);
            cnt++;
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int src;
    cin >> src;
    dfs(src);
    cout << cnt;
    return 0;
}