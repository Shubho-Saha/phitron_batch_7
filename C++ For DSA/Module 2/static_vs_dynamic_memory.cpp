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
    int *arr = new int[5];
    for(int i = 1; i<=6; i++) {
        cin>> arr[i];
    }

    for(int i=1; i<=6; i++) {
        cout<<arr[i]<<" ";
    }

    string s;
    cin>>s;
    cout<<s<<nl;
    
    return 0;
}