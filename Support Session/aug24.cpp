#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj_list[N];
bool vis[N];
int level[N];
int parent[N];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    parent[src] = -1;

    while (!q.empty()) {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par]) {
            if (!vis[child]) {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    bfs(1); // Source is always node 1

    if (!vis[n]) {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    vector<int> path;
    int node = n;
    while (node != -1) {
        path.push_back(node);
        node = parent[node];
    }

    reverse(path.begin(), path.end());
    cout << path.size() << "\n";
    for (int x : path) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
