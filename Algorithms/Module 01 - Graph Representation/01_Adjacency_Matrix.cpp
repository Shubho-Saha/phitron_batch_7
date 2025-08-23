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

    vector<vector<int>> mat(n, vector<int>(n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) 
            if (i == j) mat[i][j] = 1;
    }

    for(int i=1; i<=e; i++) {
        int a, b;
        cin>>a>>b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }

    for(auto vec : mat) {
        for(auto x : vec) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}