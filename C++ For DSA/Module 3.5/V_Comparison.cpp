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
    int a, b;
    char c;
    cin>>a>>c>>b;

    if (c == '>') {
        if (a>b) {
            cout<<"Right"<<nl;
        } else {
            cout<<"Wrong"<<nl;
        }
    } else if (c == '<') {
        if (a < b) {
            cout<<"Right"<<nl;
        } else {
            cout<<"Wrong"<<nl;
        }
    } else {
        if (a == b) {
            cout<<"Right"<<nl;
        } else {
            cout<<"Wrong"<<nl;
        }
    }
    
    return 0;
}