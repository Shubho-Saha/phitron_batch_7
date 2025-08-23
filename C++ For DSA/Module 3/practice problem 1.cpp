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
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int mnElem = INT_MAX;
    for(int i=0; i<n; i++) {
        mnElem = min(mnElem, arr[i]);
    }

    int cnt = 0;
    for(int i=0; i<n; i++) {
        if (arr[i] == mnElem) cnt++;
    }

    if (cnt % 2 == 0) {
        cout<<"Unlucky"<<nl;
    } else {
        cout<<"Lucky"<<nl;
    }
    
    return 0;
}