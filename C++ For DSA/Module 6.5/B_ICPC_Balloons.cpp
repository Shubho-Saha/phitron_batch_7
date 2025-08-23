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
        int n; cin>>n;
        string s; 
        cin>>s;
        int freq[26] = {};
        int cnt = 0;
        for(int i=0; i<s.size(); i++) {
            char c = s[i];
            freq[c-'A']++;
            if (freq[c-'A'] > 1) {
                cnt++;
            } else {
                cnt += 2;
            }
        }
        cout<<cnt<<nl;
    
    }
    
    return 0;
}