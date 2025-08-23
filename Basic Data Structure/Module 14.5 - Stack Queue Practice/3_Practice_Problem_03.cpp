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

void print(stack<int> st) {
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<nl;
}

int main()
{
    fastIO();
    stack<int> s1, s2;

    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        s1.push(x);
    }

    print(s1);
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    print(s2);
    
    return 0;
}