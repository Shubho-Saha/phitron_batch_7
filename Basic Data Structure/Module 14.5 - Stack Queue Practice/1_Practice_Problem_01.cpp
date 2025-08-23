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

class Mystack
{
    public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop() {
        v.pop_back();
    }

    int top() {
        return v.back();
    }

    bool empty() {
        return v.empty();
    }

    int size() {
        return v.size();
    }

};

void print(Mystack st) 
{
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
    Mystack s1, s2;
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        s1.push(x);
    }

    int m; cin>>m;
    for(int i=1; i<=m; i++) {
        int x; cin>>x;
        s2.push(x);
    }

    print(s1);
    print(s2);
    if (s1.size() != s2.size()) {
        cout<<"Not same"<<nl;
        return 0;
    }

    bool flag = true;

    while(!s2.empty())
    {
        if (s1.top() != s2.top()) {
            flag = false;
            break;
        }
        s1.pop(), s2.pop();
    }

    if (flag) {
        cout<<"Same"<<nl;
    } else {
        cout<<"Not same"<<nl;
    }
    
    
    return 0;
}