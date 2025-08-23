// Question: You will be given an undirected graph as input. Then you will be given a node N. You need to tell the number of nodes that can be visited from node N.

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

void dfs(int src, vector<vector<int>> &adlist, vector<bool> &visited)
{
    visited[src] = true;

    for(auto c : adlist[src]) {
        if (visited[c] == false) {
            dfs(c, adlist, visited);
        }
    }
}

int main()
{
    fastIO();
    int n, e;
    cin>>n>>e;
    vector<vector<int>> adlist(n, vector<int>());
    vector<bool> visited(n, false);

    for(int i=0; i<e; i++) {
        int a, b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    int src; cin>>src;

    dfs(src, adlist, visited);

    int cnt = 0;
    for(int i=0; i<n; i++) {
        if (visited[i]) cnt++;
    }

    cout<<cnt<<endl;
    
    
    return 0;
}