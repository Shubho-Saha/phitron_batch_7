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

void print(queue<int> st) {
    while(!st.empty())
    {
        cout<<st.front()<<" ";
        st.pop();
    }
    cout<<nl;
}

int main()
{
    fastIO();
    stack<int> st;
    queue<int> q;

    int n; cin>>n;
    for(int i=1; i<=n; i++) {
        int x; cin>>x;
        st.push(x);
    }

    int m; cin>>m;
    for(int i=1; i<=m; i++) {
        int x; cin>>x;
        q.push(x);
    }

    print(st);
    print(q);

    if (st.size() != q.size()) {
        cout<<"Not same"<<nl;
        return 0;
    }

    bool flag = true;
    while(!q.empty())
    {
        if (q.front() != st.top()) {
            flag = false;
            break;
        }
        q.pop(), st.pop();
    }

    if (flag) {
        cout<<"Same"<<nl;
    } else {
        cout<<"Not same"<<nl;
    }
    
    return 0;
}