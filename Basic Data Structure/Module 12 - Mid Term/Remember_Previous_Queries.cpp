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
    list<int> mylist;
    int q; cin>>q;
    while(q--)
    {
        int x, v;
        cin>>x>>v;

        if (x == 0) {
            mylist.push_front(v);
        } else if (x == 1) {
            mylist.push_back(v);
        } else {
            int ln = mylist.size();

            if (v >=0 && v < ln) {
                mylist.erase( next(mylist.begin(), v) );
            }
        }

        cout<<"L -> ";
        for(auto v : mylist) {
            cout<<v<<" ";
        }
        cout<<nl;

        cout<<"R -> ";
        for(auto it = mylist.rbegin(); it != mylist.rend(); it++) {
            cout<<*it<<" ";
        }
        cout<<nl;
    }
    
    return 0;
}