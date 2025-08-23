// Question: You will be given an undirected graph as input. You need to tell the number of nodes in each component in ascending order.

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

vector<int> adlist[1005];
vector<bool> visited(1005, false);
vector<int> res;

void bfs(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;
    int cnt = 0;

    while(!q.empty())
    {
        auto parent = q.front();
        q.pop();
        cnt++;

        for(auto c : adlist[parent]) {
            if (!visited[c]) {
                q.push(c);
                visited[c] = true;
            }
        }
    }

    res.push_back(cnt);
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

    for(int i=0; i<n; i++)
    {
        if(!visited[i]) {
            bfs(i);
            
        }
    }

    sort(res.begin(), res.end());

    for(auto x : res) {
        cout<<x<<" ";
    }
    
    return 0;
}