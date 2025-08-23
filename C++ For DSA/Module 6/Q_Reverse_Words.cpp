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
    getline(cin,s);
    
    stringstream ss(s);
    string word;
    ss>>word;
    reverse(all(word));
    cout<<word;
    while(ss>>word)
    {
        reverse(all(word));
        cout<<" "<<word;
    }
    
    return 0;
}