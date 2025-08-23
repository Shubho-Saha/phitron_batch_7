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
    int t; cin>>t;
    while(t--)
    {
        string s; 
        cin>>s;
        int n = s.size();
        if (n <= 10) {
            cout<<s<<nl;
        } else {
            cout<<s[0]<<n-2<<s[n-1]<<nl;
        }
    }
    
    return 0;
}