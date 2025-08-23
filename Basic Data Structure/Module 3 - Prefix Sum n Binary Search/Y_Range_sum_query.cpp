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
    int n, q;
    cin>>n>>q;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) {
        cin>>v[i];
    }
    vector<ll> pre(n+1);
    pre[1] = v[1];
    for(int i=2; i<=n; i++) {
        pre[i] = pre[i-1] + v[i];
    }

    while(q--)
    {
        int l, r;
        cin>>l>>r;
        ll sum = pre[r] - pre[l-1];
        cout<<sum<<nl;
    }
    
    return 0;
}