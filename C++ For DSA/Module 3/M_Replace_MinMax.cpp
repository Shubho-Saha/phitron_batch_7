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

    int mnElm = INT_MAX, mnidx = -1;
    int mxElm = INT_MIN, mxidx = -1;
    for(int i=0; i<n; i++) {
        if (arr[i] < mnElm) {
            mnElm = arr[i];
            mnidx = i;
        }
        if (arr[i] > mxElm) {
            mxElm = arr[i];
            mxidx = i;
        }
    }

    swap(arr[mnidx], arr[mxidx]);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}