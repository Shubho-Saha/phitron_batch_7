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
        string s;
        cin>>s;
        int f = 0, l = 0;
        for(int i=0; i<6; i++) {
            if (i < 3) {
                f += s[i] - '0';
            } else {
                l += s[i] - '0';
            }
        }

        if (f == l) {
            cout<<"YES"<<nl;
        } else {
            cout<<"NO"<<nl;
        }
    }
    
    return 0;
}