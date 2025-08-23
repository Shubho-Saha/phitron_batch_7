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
    for(auto &c: s) {
        c = tolower(c);
    }

    vector<int> freq(26);
    for(auto c : s) {
        freq[c-'a']++;
    }

    int ans = INT_MAX;
    for(int i=0; i<26; i++) {
        char c = i + 'a';
        if (c == 'e' || c == 'g' || c == 'y' || c =='p' || c == 't') {
            ans = min(ans, freq[i]);
        }
    }

    cout<<ans<<nl;
    
    return 0;
}