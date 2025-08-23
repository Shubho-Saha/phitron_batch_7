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

int main()
{
    fastIO();
    int n, e;
    cin>>n>>e;

    vector<vector<int>> adlist(n, vector<int>());

    for(int i=1; i<=e; i++) {
        int a, b;
        cin>>a>>b;

        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    for(int i=0; i<n; i++) {
        cout<<i<<" -> ";
        for(auto x : adlist[i]) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}