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
    int t;
    cin>>t;
    while(t--)
    {
        stack<char> mst;
        string s;
        cin>>s;

        for(auto c : s) {
            if (c == '0') {
                mst.push(c);
            } else {
                if (!mst.empty() && mst.top() == '0') {
                    mst.pop();
                } else {
                    mst.push(c);
                }
            }
        }

        if (mst.empty()) {
            cout<< "YES"<<nl;
        } else {
            cout<< "NO" <<nl;
        }
    }
    
    return 0;
}