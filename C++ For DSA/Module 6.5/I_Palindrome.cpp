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
    string s;
    cin>>s;
    int n = s.size();
    int l = 0, r = n-1;
    while(l < r)
    {
        if (s[l] != s[r]) {
            cout<<"NO"<<nl;
            return 0;
        }
        l++, r--;
    }

    cout<<"YES"<<nl;
    
    return 0;
}