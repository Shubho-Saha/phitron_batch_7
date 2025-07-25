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
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int prefix[n];
    prefix[0] = arr[0];

    for(int i=1; i<n; i++) {
        prefix[i] = prefix[i-1] + arr[i];
    }

    for(int i=0; i<n; i++) {
        cout<<prefix[i]<<" ";
    }


    return 0;
}