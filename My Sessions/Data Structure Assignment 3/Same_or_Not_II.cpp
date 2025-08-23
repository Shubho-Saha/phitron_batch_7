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
    list<int> mylist;

    void push(int val)
    {
        mylist.push_back(val);
    }

    void pop()
    {
        mylist.pop_back();
    }

    int top()
    {
        return mylist.back();
    }

    int size()
    {
        return mylist.size();
    }

    bool empty() {
        return mylist.empty();
    }

};

class MyQueue
{
    public:
    list<int> mylist;

    void push(int val)
    {
        mylist.push_back(val);
    }

    void pop()
    {
        mylist.pop_front();
    }

    int front()
    {
        return mylist.front();
    }

    int size()
    {
        return mylist.size();
    }

    bool empty() {
        return mylist.empty();
    }

};


int main()
{
    fastIO();
    int n, m;
    cin>>n>>m;

    Mystack mst;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        mst.push(x);
    }

    MyQueue myq;
    for(int i=0; i<m; i++) {
        int x; cin>>x;
        myq.push(x);
    }

    if (mst.size() != myq.size()) {
        cout<<"NO"<<endl;
        return 0;
    }

    bool flag = true;
    while(!mst.empty())
    {
        if (mst.top() != myq.front())
        {
            flag = false;
            break;
        }
        mst.pop();
        myq.pop();
    }

    if (flag) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
    }
    
    return 0;
}