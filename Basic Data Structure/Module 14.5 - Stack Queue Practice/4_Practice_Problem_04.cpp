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
    queue<int> q1, q2;
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        q1.push(x);
    }

    stack<int> st;
    while(!q1.empty())
    {
        st.push(q1.front());
        q1.pop();
    }

    while(!st.empty())
    {
        q2.push(st.top());
        st.pop();
    }

    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    
    return 0;
}