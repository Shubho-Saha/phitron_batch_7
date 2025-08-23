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
    int q; cin>>q;
    queue<string> myq;
    while(q--)
    {
        int com;
        cin>>com;

        if (com == 0) {
            string name;
            cin>>name;
            myq.push(name);
        } else {
            if (!myq.empty()) {
                cout<<myq.front()<<nl;
                myq.pop();
            } else {
                cout<<"Invalid"<<nl;
            }
        }
    }
    
    return 0;
}