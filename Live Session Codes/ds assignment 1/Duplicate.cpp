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

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bool flag = false;
    for(int i=0; i<n-1; i++) {
        if (arr[i] == arr[i+1]) {
            flag = true;
            break;
        }
    }

    if (flag) {
        cout<<"Duplicate"<<endl;
    } else {
        cout<<"No duplicate"<<endl;
    }
    
    return 0;
}