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

void fun()
{
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int j=n-1; j>=0; j--)
    {
        for(int i=0; i<j; i++)
        {
            if (arr[i] == 0) {
                swap(arr[i], arr[i+1]);
            }
        }
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    fastIO();
    fun();
    
    return 0;
}