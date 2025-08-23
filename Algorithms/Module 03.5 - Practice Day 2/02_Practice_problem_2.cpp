// Question: You will be given an undirected graph as input. You need to tell the number of components in this graph

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

vector<vector<int>> adlist(1005, vector<int>());
vector<bool> visited(1005, false);

void dfs(int src)
{
    visited[src] = true;
    for(auto c : adlist[src]) {
        if (visited[c] == false) {
            dfs(c);
        }
    }
}

int main()
{
    fastIO();
    int n, e;
    cin>>n>>e;

    for(int i=0; i<e; i++) {
        int a, b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    int cnt = 0;
    for(int i=0; i<n; i++) {
        if (visited[i] == false) {
            dfs(i);
            cnt++;
        }
    }

    cout<<cnt<<endl;
    
    return 0;
}